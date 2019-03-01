#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<tchar.h>
#define SIZE 100
int _tmain(int argc, LPTSTR argv[])
{
	HANDLE hfile;
	TCHAR buffer[SIZE];
	if (argc != 2)
	{
		_tprintf(_T("Usage fileopen.exe<name of the file>\n"));
		getchar();
		return FALSE;
	}
	hfile = CreateFile(argv[1], GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hfile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("File doesnot exist.Error (%d)\n"), GetLastError());
		getchar();
		return FALSE;

	}
	_tprintf(_T("File(%s) opened succesfully"), argv[1]);
	DWORD nbr;
	DWORD nBytesread = SIZE;
	while (1)
	{
		ZeroMemory(buffer, SIZE);
		BOOL ret = ReadFile(hfile, buffer, nBytesread-1, &nbr, NULL);
		if (ret == 0)
		{
			_tprintf(_T("Cant read File.Error(%d)\n"), GetLastError());
			getchar();
			return FALSE;

		}
		if (ret && nBytesread == 0 )
		{
			_tprintf(_T("Reached EOF\n"));
			break;
		}
		buffer[SIZE-1] = '\0';
		_tprintf(_T("%hS"), buffer);
	}
	CloseHandle(hfile);
	//_tprintf(_T("Text From (%s)%hS \n"), argv[1], buffer);
	getchar();
	return TRUE;


}
