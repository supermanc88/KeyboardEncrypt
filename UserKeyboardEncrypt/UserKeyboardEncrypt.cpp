// UserKeyboardEncrypt.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{

	HANDLE handle = CreateFile(L"\\\\.\\MyKeyboardEncrypt",
		GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
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

