#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<tchar.h>
int _tmain(int argc, LPTSTR argv[])
{
	HANDLE hfile;
	TCHAR buffer[]=TEXT("Hello from Windows 10");
	if (argc != 2)
	{
		_tprintf(_T("Usage fileopen.exe<name of the file>\n"));
		getchar();
		return FALSE;
	}
	hfile = CreateFile(argv[1], GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hfile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("File doesnot exist.Error (%d)\n"), GetLastError());
		getchar();
		return FALSE;

	}
	_tprintf(_T("File(%s) opened succesfully"), argv[1]);
	DWORD nbw;
		//ZeroMemory(buffer, SIZE);
		BOOL ret = WriteFile(hfile, buffer,sizeof(buffer), &nbw, NULL);
		if (ret == 0)
		{
			_tprintf(_T("Cant read File.Error(%d)\n"), GetLastError());
			getchar();
			return FALSE;

		}
	CloseHandle(hfile);
	getchar();
	return TRUE;
}
