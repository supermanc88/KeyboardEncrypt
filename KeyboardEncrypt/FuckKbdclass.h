#pragma once

#ifndef KBDTAG
#define KBDTAG 'KBDE'
#endif

typedef struct _KEYBOARDINFO_
{
	LIST_ENTRY  listentry;
	USHORT		makecode;
	USHORT		encryptoValue;
}KEYBOARDINFO, *PKEYBOARDINFO;


NTSTATUS InstallKbdclassIrpHook();

NTSTATUS MyKbdclassReadDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp);

NTSTATUS MyCompleteRoutineOfKbdclassReadDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context);

VOID MarkAndModifyKeyboardInfo(PIRP Irp);