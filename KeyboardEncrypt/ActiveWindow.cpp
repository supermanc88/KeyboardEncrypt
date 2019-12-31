
#ifdef __cplusplus
extern "C"{
#endif

#include <ntddk.h>

#include "ActiveWindow.h"
#include "SSDT.h"
#include "Common.h"
#include "Win10_1703_x64.h"

	extern ULONG g_RelatedProcessId;


	typedef ULONG_PTR(__fastcall *pfNtUserGetForegroundWindow)();

	typedef HANDLE(__fastcall *pfNtUserQueryWindow)(
		IN HANDLE hwnd,
		IN ULONG WindowInfo);


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

	BOOLEAN IsRelatedWindowActive()
	{
		PVOID GetForegroundWindowProcAddr = NULL;
		GetForegroundWindowProcAddr = GetShadowSSDTProcAddr(0x3f);

		PWCHAR relateName = NULL;
		PWCHAR processName = NULL;

		GetProcessNameByPid(g_RelatedProcessId, &relateName);

		if (g_RelatedProcessId && wcscmp(relateName, L"TestDesk.exe") == 0)
		{
			
			return TRUE;

		}
		return FALSE;
	}


#ifdef __cplusplus
}
#endif