
#ifdef __cplusplus
extern "C"{
#endif

#include <ntifs.h>
#include <ntddk.h>
#include <intrin.h>

#include "SSDT.h"
#include "Common.h"

	ULONG g_OSVersion = 0;


	typedef struct _SYSTEM_SERVICE_TABLE
	{
		PVOID*	ServiceTable; // array of entry points 
		ULONG_PTR CounterTable; // array of usage counters 
		ULONG_PTR ServiceLimit; // number of table entries 
		ULONG_PTR ArgumentTable; // array of byte counts 
	}
	SYSTEM_SERVICE_TABLE, *PSYSTEM_SERVICE_TABLE, **PPSYSTEM_SERVICE_TABLE;

	typedef struct _SERVICE_DESCRIPTOR_TABLE
	{
		SYSTEM_SERVICE_TABLE ntoskrnl; // ntoskrnl.exe ( native api ) 
		SYSTEM_SERVICE_TABLE win32k; // win32k.sys (gdi/user support) 
		SYSTEM_SERVICE_TABLE Table3; // not used 
		SYSTEM_SERVICE_TABLE Table4; // not used 
	}SYSTEM_DESCRIPTOR_TABLE, *PSYSTEM_DESCRIPTOR_TABLE, **PPSYSTEM_DESCRIPTOR_TABLE;

	PVOID GetShadowSSDTProcAddr(ULONG Index)
	{
		PVOID procAddr = NULL;

		// ssdt shadow 的算法 x86和x64也不一样
		// ssdt shadow的地址也只有是窗口进程才才能访问

		NTSTATUS status;

		PRKAPC_STATE apcState;

		PEPROCESS eprocess;

		PSYSTEM_DESCRIPTOR_TABLE shadowSSDTBase = (PSYSTEM_DESCRIPTOR_TABLE)GetShadowSSDTBase();

		status = PsLookupProcessByProcessId((HANDLE)GetPidByProcName((PWCHAR)L"explorer.exe"), &eprocess);
		
		if (!NT_SUCCESS(status))
		{
			return NULL;
		}
		
		apcState = (PRKAPC_STATE)ExAllocatePool(NonPagedPool, sizeof(KAPC_STATE));
		
		KeStackAttachProcess((PRKPROCESS)eprocess, apcState);

#ifdef _X86_



		procAddr = MmIsAddressValid(shadowSSDTBase->win32k.ServiceTable) ? shadowSSDTBase->win32k.ServiceTable[Index] : NULL;

#else
		/*
		* 还原以下汇编
		* movsxd 是带符号扩展
		* sar是带符号右移
		nt!KiSystemServiceRepeat+0x35:
		fffff801`12fc8c09 4d8b143a        mov     r10,qword ptr [r10+rdi]
		fffff801`12fc8c0d 4d631c82        movsxd  r11,dword ptr [r10+rax*4]
		fffff801`12fc8c11 498bc3          mov     rax,r11
		fffff801`12fc8c14 49c1fb04        sar     r11,4
		fffff801`12fc8c18 4d03d3          add     r10,r11
		fffff801`12fc8c1b 83ff20          cmp     edi,20h
		fffff801`12fc8c1e 7550            jne     nt!KiSystemServiceGdiTebAccess+0x49 (fffff801`12fc8c70)
		*/

		PVOID addrBase = shadowSSDTBase->win32k.ServiceTable;

		LONG offset = *((PULONG)shadowSSDTBase->win32k.ServiceTable + Index);


		if (offset & 0x80000000)
		{
			offset = (offset >> 4) | 0xF0000000;
		}
		else
		{
			offset >>= 4;
		}

		procAddr = (PVOID)((ULONG_PTR)addrBase + (LONG_PTR)offset);


#endif
		KeUnstackDetachProcess(apcState);
		ExFreePool(apcState);
		
		ObDereferenceObject(eprocess);
		return procAddr;
	}


#ifdef _X86_
	PVOID GetSSDTShadowViaKeAddSystemServiceTable()
	{
		PVOID ssdtShadowAddress = NULL;

		PUCHAR Buff;
		PUCHAR p;
		UNICODE_STRING usKeAddSystemServiceTable;
		extern PSYSTEM_DESCRIPTOR_TABLE KeServiceDescriptorTable;


		RtlInitUnicodeString(&usKeAddSystemServiceTable, L"KeAddSystemServiceTable");
		Buff = (PUCHAR)MmGetSystemRoutineAddress(&usKeAddSystemServiceTable);


		if (g_OSVersion == WIN8_9200 || g_OSVersion == WIN8_1_9600)
		{
			for (p = Buff; p < Buff + PAGE_SIZE; p++)
			{
				if ((*(PUSHORT)p == 0x9189) && (*(p + 6) == 0x89))
				{
					ssdtShadowAddress = (PVOID)(*(PULONG)(p + 2));
					break;
				}
			}
		}

		else if (g_OSVersion >= WIN10_1507_10240)
		{
			PVOID pKiServiceTable = (PVOID)(&KeServiceDescriptorTable->ntoskrnl);

			UCHAR memcopies[1024] = { 0 };

			memcpy(memcopies, Buff, 1024);

			// 找到这个函数的ret
			int fLen = 0;
			for (; fLen < 1024; fLen++)
			{
				if (memcopies[fLen] == 0xC2 || memcopies[fLen] == 0xC3)
				{
					break;
				}
			}

			BOOLEAN findFirst = FALSE;

			for (int i = 0; i < fLen; i++)
			{
				// 81d9ef1b 833d1023c48100  cmp     dword ptr[nt!KeServiceDescriptorTable + 0x10 (81c42310)], 0
				// 	81d9ef22 752a            jne     nt!KeAddSystemServiceTable + 0x3e (81d9ef4e)
				// 	81d9ef24 833dd022c48100  cmp     dword ptr[nt!KeServiceDescriptorTableShadow + 0x10 (81c422d0)], 0

				p = Buff + i;

				PVOID temp = (PVOID)(*(PULONG_PTR)p - 0x10);

				if (MmIsAddressValid(temp))
				{
					if (*(PULONG_PTR)temp == *(PULONG_PTR)pKiServiceTable)
					{
						if (!findFirst)
						{
							// 81d9ef1b 833d1023c48100  cmp     dword ptr[nt!KeServiceDescriptorTable + 0x10 (81c42310)], 0
							// 第一次找到这里
							findFirst = TRUE;
							continue;
						}
						else
						{
							// 第二次再找到的时候，就是找到了shadow ssdt地址
							ssdtShadowAddress = temp;
							break;
						}
					}
				}
			}
		}

		return ssdtShadowAddress ? ssdtShadowAddress : NULL;

	}
#endif

	PVOID SearchforKeServiceDescriptorTableShadow64(ULONGLONG StartSearchAddress, ULONGLONG EndSearchAddress)
	{
		UCHAR b1 = 0, b2 = 0, b3 = 0;
		ULONG templong = 0;
		PVOID KeServiceDescriptorTable = 0;

		//地址效验
		if (MmIsAddressValid((PVOID)StartSearchAddress) == FALSE)return NULL;
		if (MmIsAddressValid((PVOID)EndSearchAddress) == FALSE)return NULL;

		for (PUCHAR i = (PUCHAR)StartSearchAddress; i < (PUCHAR)EndSearchAddress; i++)
		{
			if (MmIsAddressValid(i) && MmIsAddressValid(i + 1) && MmIsAddressValid(i + 2))
			{
				b1 = *i;
				b2 = *(i + 1);
				b3 = *(i + 2);
				if (b1 == 0x4c && b2 == 0x8d && b3 == 0x1d)  //4c8d1d
				{
					memcpy(&templong, i + 3, 4);
					KeServiceDescriptorTable = (PVOID)((ULONG_PTR)templong + (ULONG_PTR)i + 7);
					return KeServiceDescriptorTable;

					/*
					* 当前地址 + 长度 + 数值
					* fffff800`03c8c772+7 + 00232100 = FFFFF80003EBE880
					* fffff800`03c8c772 4c8d15c7202300  lea     r10,[nt!KeServiceDescriptorTable (fffff800`03ebe840)]
					* fffff800`03c8c779 4c8d1d00212300  lea     r11,[nt!KeServiceDescriptorTableShadow (fffff800`03ebe880)]
					*/
				}
			}
		}
		return NULL;
	}


	PVOID GetSSDTShadowViaKiSystemCall64()
	{
		PVOID addr = NULL;

		if (g_OSVersion != 0)
		{
			PUCHAR pKiSystemCall64 = (PUCHAR)__readmsr(0xc0000082);  //rdmsr c0000082   //定位KiSystemCall64
			PUCHAR EndSearchAddress = pKiSystemCall64 + 0x500;


			addr = SearchforKeServiceDescriptorTableShadow64((ULONG_PTR)pKiSystemCall64, (ULONG_PTR)EndSearchAddress);

			// 一般情况下，在KiSystemCall64函数中就可以直接找到了，但有的系统中找不到，需要在KiSystemCall64调用的函数KiSystemServiceUser中找
			if (addr)
			{
				return addr;
			}

			ULONGLONG KiSystemServiceUser = 0;
			ULONGLONG templong = 0xffffffffffffffff;
			for (PUCHAR i = pKiSystemCall64; i < EndSearchAddress + 0xff; i++)
			{
				if (*(PUCHAR)i == 0xe9 && *(PUCHAR)(i + 5) == 0xc3)
				{
					//fffff803`23733383 e9631ae9ff      jmp     nt!KiSystemServiceUser(fffff803`235c4deb)
					//fffff803`23733388 c3              ret
					RtlCopyMemory(&templong, (PUCHAR)(i + 1), 4);
					KiSystemServiceUser = templong + 5 + (ULONGLONG)i;//KiSystemServiceUser
					EndSearchAddress = (PUCHAR)KiSystemServiceUser + 0x500;
					addr = (PSYSTEM_DESCRIPTOR_TABLE)SearchforKeServiceDescriptorTableShadow64(KiSystemServiceUser, (ULONG_PTR)EndSearchAddress);
					return addr;
				}
			}

		}
		return addr;
	}

	PVOID GetShadowSSDTBase()
	{
		PVOID addr = NULL;

		GetSystemVersion();

		if (g_OSVersion != 0)
		{
#ifdef _X86_
			if (g_OSVersion >= WIN8_9200)
			{
				addr = (PSYSTEM_DESCRIPTOR_TABLE)GetSSDTShadowViaKeAddSystemServiceTable();
			}
			else
			{
				extern PSYSTEM_DESCRIPTOR_TABLE KeServiceDescriptorTable;

				addr = KeServiceDescriptorTable + 1;
			}
#else
			addr = GetSSDTShadowViaKiSystemCall64();
#endif
		}


		return addr;
	}


	VOID GetSystemVersion()
	{
		RTL_OSVERSIONINFOW versionInfo = { 0 };
		ULONG dwMajorVersion = 0;
		ULONG dwMinorVersion = 0;
		ULONG dwBuildNumber = 0;
		versionInfo.dwOSVersionInfoSize = sizeof(RTL_OSVERSIONINFOW);

		RtlGetVersion(&versionInfo);

		dwMajorVersion = versionInfo.dwMajorVersion;
		dwMinorVersion = versionInfo.dwMinorVersion;
		dwBuildNumber = versionInfo.dwBuildNumber;

		KdPrint(("KbdProtector : Current System Version : dwMajorVersion = %d, dwMinorVersion = %d, dwBuildNumber = %d\n", dwMajorVersion, dwMinorVersion, dwBuildNumber));

		switch (dwMajorVersion)
		{
		case 6:
		{
			if (dwMinorVersion == 1 && dwBuildNumber == 7600)
			{
				g_OSVersion = WIN7_7600;
			}
			else if (dwMinorVersion == 1 && dwBuildNumber == 7601)
			{
				g_OSVersion = WIN7SP1_7601;
			}
			else if (dwMinorVersion == 2 && dwBuildNumber == 9200)
			{
				g_OSVersion = WIN8_9200;
			}
			else if (dwMinorVersion == 3 && dwBuildNumber == 9600)
			{
				g_OSVersion = WIN8_1_9600;
			}
		}
		break;
		case 10:
		{
			if (dwMinorVersion == 0 && dwBuildNumber == 18362)
			{
				g_OSVersion = WIN10_1903_18362;
			}
			else if (dwMinorVersion == 0 && dwBuildNumber == 17763)
			{
				g_OSVersion = WIN10_1809_17763;
			}
			else if (dwMinorVersion == 0 && dwBuildNumber == 17134)
			{
				g_OSVersion = WIN10_1803_17134;
			}
			else if (dwMinorVersion == 0 && dwBuildNumber == 16299)
			{
				g_OSVersion = WIN10_1709_16299;
			}
			else if (dwMinorVersion == 0 && dwBuildNumber == 15063)
			{
				g_OSVersion = WIN10_1703_15063;
			}
			else if (dwMinorVersion == 0 && dwBuildNumber == 14393)
			{
				g_OSVersion = WIN10_1607_14393;
			}
			else if (dwMinorVersion == 0 && dwBuildNumber == 10586)
			{
				g_OSVersion = WIN10_1511_10586;
			}
			else if (dwMinorVersion == 0 && dwBuildNumber == 10240)
			{
				g_OSVersion = WIN10_1507_10240;
			}
		}
		break;
		default:
			g_OSVersion = 0;
			break;
		}

		KdPrint(("KeyboardEncrypt Current System Version : %ld\r\n", g_OSVersion));
	}


	ULONG GetPidByProcName(PWCHAR processName)
	{
		ULONG pid = 0;

		ULONG szBuffer = 0x1000;
		PVOID buffer = NULL;
		ULONG retSize;

		UNICODE_STRING uProcessName;

		NTSTATUS status = STATUS_UNSUCCESSFUL;

		RtlInitUnicodeString(&uProcessName, processName);

		do
		{
			buffer = ExAllocatePool(NonPagedPool, szBuffer);
			status = ZwQuerySystemInformation(SystemProcessesAndThreadsInformation,
				buffer,
				szBuffer,
				&retSize);

			if (!NT_SUCCESS(status))
			{
				ExFreePool(buffer);
				szBuffer = retSize;
			}

		} while (status == STATUS_INFO_LENGTH_MISMATCH);


		PSYSTEM_PROCESS_INFORMATION pInfo = (PSYSTEM_PROCESS_INFORMATION)buffer;

		while (true)
		{
			if (pInfo->ImageName.Buffer != NULL)
			{
				if (RtlCompareUnicodeString(&uProcessName, &pInfo->ImageName, TRUE) == 0 && pInfo->SessionId != 0)
				{
					ULONG pid = (ULONG)pInfo->UniqueProcessId;
					ExFreePool(buffer);
					return pid;
				}
			}
			if (pInfo->NextEntryOffset == 0)
			{
				break;
			}
			pInfo = (PSYSTEM_PROCESS_INFORMATION)((ULONG_PTR)pInfo + pInfo->NextEntryOffset);
		}

		ExFreePool(buffer);

		return pid;
	}


	VOID GetProcessNameByPid(IN ULONG Pid, OUT PWCHAR * ProcessName)
	{
		ULONG szBuffer = 0x1000;
		PVOID buffer = NULL;
		ULONG retSize;

		NTSTATUS status = STATUS_UNSUCCESSFUL;

		*ProcessName = (PWCHAR)ExAllocatePool(NonPagedPool, 100);

		memset(*ProcessName, 0, 100);

		do
		{
			buffer = ExAllocatePool(NonPagedPool, szBuffer);
			status = ZwQuerySystemInformation(SystemProcessesAndThreadsInformation,
				buffer,
				szBuffer,
				&retSize);

			if (!NT_SUCCESS(status))
			{
				ExFreePool(buffer);
				szBuffer = retSize;
			}

		} while (status == STATUS_INFO_LENGTH_MISMATCH);


		PSYSTEM_PROCESS_INFORMATION pInfo = (PSYSTEM_PROCESS_INFORMATION)buffer;

		while (true)
		{
			if ((ULONG)pInfo->UniqueProcessId == Pid)
			{
				memcpy(*ProcessName, pInfo->ImageName.Buffer, pInfo->ImageName.Length);
				ExFreePool(buffer);
				return;
			}
			if (pInfo->NextEntryOffset == 0)
			{
				break;
			}
			pInfo = (PSYSTEM_PROCESS_INFORMATION)((ULONG_PTR)pInfo + pInfo->NextEntryOffset);
		}

		ExFreePool(buffer);
	}


#ifdef __cplusplus
}
#endif
