#ifdef __cplusplus
extern "C"{
#endif

#include <ntddk.h>

#include "KeyboardEncrypt.h"
#include "FuckKbdclass.h"
#include "Common.h"


#define CTL_RELATION_PROCESS_INFO		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS)


	extern ULONG g_IrpPendingNum;
	extern PDRIVER_DISPATCH g_OriKbdclassReadDispatch;


	LIST_ENTRY g_KbdInfoList;
	ULONG g_RelatedProcessId = 0;


	NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
	{
		NTSTATUS status = STATUS_UNSUCCESSFUL;

		KdPrint(("KeyboardEncrypt 驱动加载\n"));

		DriverObject->DriverUnload = DriverUnload;

		InitializeListHead(&g_KbdInfoList);


		// 创建设备
		UNICODE_STRING uDeviceName;
		UNICODE_STRING uSymbolicLinkName;

		RtlInitUnicodeString(&uDeviceName, L"\\Device\\MyKeyboardEncrypt");
		RtlInitUnicodeString(&uSymbolicLinkName, L"\\??\\MyKeyboardEncrypt");


		PDEVICE_OBJECT DeviceObject = NULL;
		status = IoCreateDevice(DriverObject,
			0,
			&uDeviceName,
			FILE_DEVICE_UNKNOWN,
			NULL,
			FALSE,
			&DeviceObject);

		if (!NT_SUCCESS(status))
		{
			KdPrint(("KeyboardEncrypt 驱动创建设备失败\n"));
			return status;
		}

		IoCreateSymbolicLink(&uSymbolicLinkName, &uDeviceName);

		DeviceObject->Flags |= DO_BUFFERED_IO;

		DeviceObject->Flags &= ~DO_DEVICE_INITIALIZING;


		for (int i = 0; i < IRP_MJ_MAXIMUM_FUNCTION; i++)
		{
			DriverObject->MajorFunction[i] = KeyboardEncryptCommonDispatch;
		}

		DriverObject->MajorFunction[IRP_MJ_DEVICE_CONTROL] = KeyboardEncryptDeviceIoControlDispatch;

		DriverObject->MajorFunction[IRP_MJ_READ] = KeyboardEncryptReadDispatch;


		status = InstallKbdclassIrpHook();

		return status;
	}


	NTSTATUS KeyboardEncryptReadDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
	{
		PIO_STACK_LOCATION irpSp = IoGetCurrentIrpStackLocation(Irp);
		PVOID readBuf = Irp->AssociatedIrp.SystemBuffer;
		ULONG readLen = irpSp->Parameters.Read.Length;
		NTSTATUS status = STATUS_SUCCESS;

		if (readLen < sizeof(USHORT))
		{
			Irp->IoStatus.Status = STATUS_INVALID_BLOCK_LENGTH;
			Irp->IoStatus.Information = 0;
			IoCompleteRequest(Irp, IO_NO_INCREMENT);
			return STATUS_INVALID_BLOCK_LENGTH;
		}

		if (!IsListEmpty(&g_KbdInfoList))
		{
			PLIST_ENTRY pEntry = RemoveHeadList(&g_KbdInfoList);

			PKEYBOARDINFO keyboardInfo = CONTAINING_RECORD(pEntry, KEYBOARDINFO, listentry);

			memcpy(readBuf, &keyboardInfo->encryptoValue, 2);

			Irp->IoStatus.Status = STATUS_SUCCESS;
			Irp->IoStatus.Information = 2;
			status = STATUS_SUCCESS;
		}
		else
		{
			Irp->IoStatus.Status = STATUS_UNSUCCESSFUL;
			Irp->IoStatus.Information = 0;
			status = STATUS_UNSUCCESSFUL;
		}

		IoCompleteRequest(Irp, IO_NO_INCREMENT);
		return status;
	}


	NTSTATUS KeyboardEncryptDeviceIoControlDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
	{
		NTSTATUS status = STATUS_SUCCESS;
		PIO_STACK_LOCATION irpSp = IoGetCurrentIrpStackLocation(Irp);

		switch (irpSp->Parameters.DeviceIoControl.IoControlCode)
		{
		case CTL_RELATION_PROCESS_INFO:
			{
				PVOID buf = Irp->AssociatedIrp.SystemBuffer;

				g_RelatedProcessId = *(PULONG)buf;

				Irp->IoStatus.Status = STATUS_SUCCESS;
				status = STATUS_SUCCESS;
				break;
			}
		default:
			Irp->IoStatus.Status = STATUS_INVALID_PARAMETER;
			status = STATUS_INVALID_PARAMETER;
			break;
		}

		Irp->IoStatus.Information = 0;

		IoCompleteRequest(Irp, IO_NO_INCREMENT);
		return status;
	}

	NTSTATUS KeyboardEncryptCommonDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
	{
		Irp->IoStatus.Status = STATUS_SUCCESS;
		Irp->IoStatus.Information = 0;

		IoCompleteRequest(Irp, IO_NO_INCREMENT);
		return STATUS_SUCCESS;
	}



	VOID DriverUnload(PDRIVER_OBJECT DriverObject)
	{
		UNICODE_STRING uSymbolicLinkName;
		RtlInitUnicodeString(&uSymbolicLinkName, L"\\??\\MyKeyboardEncrypt");

		IoDeleteSymbolicLink(&uSymbolicLinkName);

		IoDeleteDevice(DriverObject->DeviceObject);

		PDRIVER_OBJECT kbdclassDriverObject = NULL;

		NTSTATUS status = GetDriverObjectByName(L"\\Driver\\kbdclass", &kbdclassDriverObject);


		// 还原kbdclass的read hook
		InterlockedExchangePointer((PVOID *)&kbdclassDriverObject->MajorFunction[IRP_MJ_READ], g_OriKbdclassReadDispatch);

		ObDereferenceObject(kbdclassDriverObject);

		// 当驱动中的 pending irp计数器为0时，驱动才能退出
		// 每隔100ms去检查一下 g_IrpPendingNum
		LARGE_INTEGER delayTime = { 0 };

		delayTime = RtlConvertLongToLargeInteger(100 * -10000);

		PKTHREAD currentThread = KeGetCurrentThread();
		KeSetPriorityThread(currentThread, LOW_REALTIME_PRIORITY);

		while (g_IrpPendingNum)
		{
			KeDelayExecutionThread(KernelMode, FALSE, &delayTime);
		}

		KdPrint(("KeyboardEncrypt 驱动卸载\n"));
	}


#ifdef __cplusplus
}
#endif


