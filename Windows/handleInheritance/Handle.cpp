#include<Windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<tchar.h>
//#define NOOFPROC 2
void _tmain(int argc, TCHAR *argv[], TCHAR *env[])
{
	STARTUPINFO si1, si2;
	PROCESS_INFORMATION pi1, pi2;
	SECURITY_ATTRIBUTES sa;
	ZeroMemory(&si1, sizeof(si1));
	si1.cb = sizeof(si1);
	ZeroMemory(&pi1, sizeof(pi1));
	ZeroMemory(&si2, sizeof(si2));
	si1.cb = sizeof(si1);
	ZeroMemory(&pi2, sizeof(pi2));
	sa.nLength = sizeof(sa);
	sa.lpSecurityDescriptor = NULL;
	sa.bInheritHandle = TRUE;
	HANDLE hfile = CreateFile(argv[1], GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hfile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("File doesnot exist.Error (%d)\n"), GetLastError());
		getchar();
		return;

	}
	
	if (argc != 3)
	{
		printf("Usage: %s[cmdline]\n", argv[1]);
		getchar();
		return;
	}
	if (!CreateProcess(NULL,argv[2], NULL, NULL,TRUE, 0, NULL, NULL, &si1, &pi1))
	{
		printf("Create Process error(%d)\n", GetLastError());
		getchar();
		return;
	}
	/*if (!CreateProcess(NULL, argv[2], NULL, NULL, TRUE, 0, NULL, NULL, &si2, &pi2))
	{
		printf("Create Process error(%d)\n", GetLastError());
		getchar();
		return;
	}*/
	printf("Handle of process %ld\n", pi1.hProcess);
	printf("ProcessID of process %ld\n", pi1.dwProcessId);
	/*printf("Handle of process %ld\n", pi2.hProcess);
	printf("ProcessID of process %ld\n", pi2.dwProcessId);
	*/

	CloseHandle(pi1.hThread);
	CloseHandle(pi1.hProcess);
	CloseHandle(hfile);
	getchar();
}
