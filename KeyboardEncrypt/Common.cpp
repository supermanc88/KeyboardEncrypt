#ifdef __cplusplus
extern "C"{
#endif

#include <ntddk.h>

#include "Common.h"

	NTSTATUS GetDriverObjectByName(PWCHAR DriverName, PDRIVER_OBJECT * DriverObject)
	{
		NTSTATUS status = STATUS_SUCCESS;
		UNICODE_STRING uKbdclassDriverName;

		RtlInitUnicodeString(&uKbdclassDriverName, DriverName);

		status = ObReferenceObjectByName(&uKbdclassDriverName,
			OBJ_CASE_INSENSITIVE,
			NULL,
			FILE_ALL_ACCESS,
			*IoDriverObjectType,
			KernelMode,
			NULL,
			(PVOID *)DriverObject);

		return status;
	}

#ifdef __cplusplus
}
#endif
