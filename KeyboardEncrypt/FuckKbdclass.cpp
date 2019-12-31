#ifdef __cplusplus
extern "C"{
#endif

#include <ntddk.h>
#include <ntddkbd.h>

#include "FuckKbdclass.h"
#include "Common.h"

	extern LIST_ENTRY g_KbdInfoList;

	PDRIVER_DISPATCH g_OriKbdclassReadDispatch = NULL;
	PIO_COMPLETION_ROUTINE g_OriKbdclassCompleteRoutineOfReadDispatch = NULL;
	ULONG g_IrpPendingNum = 0;


	NTSTATUS InstallKbdclassIrpHook()
	{
		NTSTATUS status = STATUS_SUCCESS;

		PDRIVER_OBJECT kbdclassDriverObject = NULL;

		status = GetDriverObjectByName(L"\\Driver\\kbdclass", &kbdclassDriverObject);

		if (!NT_SUCCESS(status))
		{
			KdPrint(("KeyboardEncrypt 通过驱动名获取驱动对象失败\n"));
			return status;
		}

		g_OriKbdclassReadDispatch = kbdclassDriverObject->MajorFunction[IRP_MJ_READ];

		KdPrint(("KeyboardEncrypt 原 kbdclass 的 Read 地址为：0x%p\n", g_OriKbdclassReadDispatch));

		InterlockedExchangePointer((PVOID *)&kbdclassDriverObject->MajorFunction[IRP_MJ_READ], MyKbdclassReadDispatch);

		ObDereferenceObject(kbdclassDriverObject);

		return status;
	}


	NTSTATUS MyKbdclassReadDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
	{
		g_IrpPendingNum++;

		PIO_STACK_LOCATION irpSp = IoGetCurrentIrpStackLocation(Irp);

		irpSp->Control = SL_INVOKE_ON_CANCEL | SL_INVOKE_ON_ERROR | SL_INVOKE_ON_SUCCESS;

		g_OriKbdclassCompleteRoutineOfReadDispatch = irpSp->CompletionRoutine;

		irpSp->CompletionRoutine = MyCompleteRoutineOfKbdclassReadDispatch;

		if (g_OriKbdclassReadDispatch)
		{
			return g_OriKbdclassReadDispatch(DeviceObject, Irp);
		}

		Irp->IoStatus.Status = STATUS_SUCCESS;
		Irp->IoStatus.Information = 0;
		IoCompleteRequest(Irp, IO_NO_INCREMENT);
		return STATUS_SUCCESS;
	}

	NTSTATUS MyCompleteRoutineOfKbdclassReadDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context)
	{
		g_IrpPendingNum--;

		MarkAndModifyKeyboardInfo(Irp);

		if (Irp->PendingReturned)
		{
			IoMarkIrpPending(Irp);
		}

		if (g_OriKbdclassCompleteRoutineOfReadDispatch)
		{
			return g_OriKbdclassCompleteRoutineOfReadDispatch(DeviceObject, Irp, Context);
		}


		return Irp->IoStatus.Status;
	}

	VOID MarkAndModifyKeyboardInfo(PIRP Irp)
	{
		if (NT_SUCCESS(Irp->IoStatus.Status))
		{
			PVOID kbdBuf = Irp->AssociatedIrp.SystemBuffer;

			PKEYBOARD_INPUT_DATA kbdData = (PKEYBOARD_INPUT_DATA)kbdBuf;

			ULONG kbdDataLen = Irp->IoStatus.Information;

			ULONG keywordNum = kbdDataLen / sizeof(PKEYBOARD_INPUT_DATA);


			for (int i = 0; i < keywordNum; i++)
			{
				// 只记up
				if (!kbdData->Flags)
				{				
					// 记录到链表
					PKEYBOARDINFO keyboardInfo = (PKEYBOARDINFO)ExAllocatePoolWithTag(NonPagedPool, sizeof(KEYBOARDINFO), KBDTAG);

					keyboardInfo->makecode = kbdData->MakeCode;
					keyboardInfo->encryptoValue = kbdData->MakeCode ^ 0xFFFF;

					InsertHeadList(&g_KbdInfoList, &keyboardInfo->listentry);
				}
				// 修改
				kbdData->MakeCode = 0x31; // 'A'
			}

		}
	}

#ifdef __cplusplus
}
#endif
