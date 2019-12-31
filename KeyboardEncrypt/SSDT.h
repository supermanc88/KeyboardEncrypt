#pragma once


/*
* win10			10.0
*/
#define		WIN10_1903_18362		18362
#define		WIN10_1809_17763		17763
#define		WIN10_1803_17134		17134
#define		WIN10_1709_16299		16299
#define		WIN10_1703_15063		15063
#define		WIN10_1607_14393		14393
#define		WIN10_1511_10586		10586
#define		WIN10_1507_10240		10240


/*
* win8
*/
#define		WIN8_1_9600				9600		//6.3   Windows Server 2012 R2
#define		WIN8_9200				9200		//6.2   Windows Server 2012


/*
* win7
*/
#define		WIN7SP1_7601			7601		// 6.1
#define		WIN7_7600				7600



/*
* 通过index获取shadow ssdt中函数地址
*/
PVOID GetShadowSSDTProcAddr(ULONG Index);



/*
* 获取Shadow SSDT地址
*/
PVOID GetShadowSSDTBase();


VOID GetSystemVersion();


ULONG GetPidByProcName(PWCHAR processName);


VOID GetProcessNameByPid(IN ULONG Pid, OUT PWCHAR * ProcessName);