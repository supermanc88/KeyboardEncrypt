
#ifdef __cplusplus
extern "C"{
#endif

#include <ntifs.h>
#include <ntddk.h>

#include "ActiveWindow.h"
#include "SSDT.h"
#include "Common.h"
#include "Win10_1703_x64.h"

	typedef ULONG_PTR(__fastcall *pfNtUserGetForegroundWindow)();

	typedef HANDLE(__fastcall *pfNtUserQueryWindow)(
		IN HANDLE hwnd,
		IN ULONG WindowInfo);


	extern ULONG g_RelatedProcessId;

	BOOLEAN	g_IsActive = FALSE;


	pfNtUserGetForegroundWindow NtUserGetForegroundWindow = NULL;
	pfNtUserQueryWindow NtUserQueryWindow = NULL;

	ULONGLONG GetGuiThread(PEPROCESS eprocess)
	{
		PMY_EPROCESS myEprocess;

		myEprocess = (PMY_EPROCESS)eprocess;

		PLIST_ENTRY plist;

		for (plist = myEprocess->ThreadListHead.Flink; plist != &myEprocess->ThreadListHead; plist = plist->Flink)
		{
			PMY_ETHREAD myEthread = CONTAINING_RECORD(plist, MY_ETHREAD, ThreadListEntry);

			PMY_KTHREAD myKthread = (PMY_KTHREAD)myEthread;

			if (myKthread->Win32Thread != 0)
			{
				return myKthread->Win32Thread;
			}
		}

		return 0;
	}


	// 由于此函数在hook的kbdclass read complete中不可调用，改到开线程调用
	BOOLEAN IsRelatedWindowActive()
	{
		if (g_RelatedProcessId == 0)
		{
			return FALSE;
		}

		if (!NtUserGetForegroundWindow)
		{
			NtUserGetForegroundWindow = (pfNtUserGetForegroundWindow)GetShadowSSDTProcAddr(0x3f);
		}
		if (!NtUserQueryWindow)
		{
			NtUserQueryWindow = (pfNtUserQueryWindow)GetShadowSSDTProcAddr(0x13);
		}

		PWCHAR relateName = NULL;

		GetProcessNameByPid(g_RelatedProcessId, &relateName);

		// 这里是写死了，以后可以通过应用层传过来信息
		if (wcscmp(relateName, L"notepad.exe") == 0)
		{
			ExFreePool(relateName);
			PEPROCESS relProcEProcess = NULL;
			NTSTATUS status = PsLookupProcessByProcessId((HANDLE)g_RelatedProcessId, &relProcEProcess);
			if (!NT_SUCCESS(status))
			{
				return FALSE;
			}

			PRKAPC_STATE apcState;
			apcState = (PRKAPC_STATE)ExAllocatePoolWithTag(NonPagedPool, sizeof(KAPC_STATE), KBDTAG);

			KeStackAttachProcess(relProcEProcess, apcState);

			PETHREAD currentEThread = KeGetCurrentThread();

			((PMY_KTHREAD)currentEThread)->Win32Thread = GetGuiThread(relProcEProcess);

			ULONG_PTR hActiveWindow = NtUserGetForegroundWindow();

			ULONG activeProcId = (ULONG)NtUserQueryWindow((HANDLE)hActiveWindow, 0);

			((PMY_KTHREAD)currentEThread)->Win32Thread = 0;

			KeUnstackDetachProcess(apcState);

			ExFreePool(apcState);

			if (activeProcId == g_RelatedProcessId)
			{
				return TRUE;
			}
			else
			{
				return FALSE;
			}
		}
		ExFreePool(relateName);
		return FALSE;
	}



	VOID ActiveWindowThread( PVOID StartContext )
	{
		while (TRUE)
		{
			// 这用的时候最好有个自旋锁
			g_IsActive = IsRelatedWindowActive();
			LARGE_INTEGER delayTime = { 0 };

			delayTime = RtlConvertLongToLargeInteger(100 * -10000);

			PKTHREAD currentThread = KeGetCurrentThread();

			KeDelayExecutionThread(KernelMode, FALSE, &delayTime);

		}

		PsTerminateSystemThread(STATUS_SUCCESS);
	}


#ifdef __cplusplus
}
#endif