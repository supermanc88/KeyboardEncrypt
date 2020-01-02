// UserKeyboardEncrypt.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <Windows.h>

#include <winioctl.h>


#define CTL_RELATION_PROCESS_INFO		CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS)


int _tmain(int argc, _TCHAR* argv[])
{

	HANDLE handle = CreateFile(L"\\\\.\\MyKeyboardEncrypt",
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);

	DWORD procId = 0;

	scanf("%d", &procId);


	DWORD byteRet = 0;
	DeviceIoControl(handle,
		CTL_RELATION_PROCESS_INFO,
		&procId,
		4,
		NULL,
		NULL,
		&byteRet,
		NULL);



	while (true)
	{
		USHORT code;
		DWORD byteRead = 0;
		ReadFile(handle,
			&code,
			2,
			&byteRead,
			NULL);

		printf("%c\n", (UCHAR)code^0xFFFF);
		getchar();
	}

	return 0;
}

