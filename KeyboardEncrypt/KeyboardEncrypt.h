#pragma once

#ifndef KBDTAG
#define KBDTAG 'KBDE'
#endif

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath);

VOID DriverUnload(PDRIVER_OBJECT DriverObject);

NTSTATUS KeyboardEncryptCommonDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp);

NTSTATUS KeyboardEncryptDeviceIoControlDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp);

NTSTATUS KeyboardEncryptReadDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp);
