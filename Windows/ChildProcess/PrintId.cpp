#include<Windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<tchar.h>
#define NOOFPROC 2
void _tmain(int argc, TCHAR *argv[], TCHAR *env[])
{
	STARTUPINFO si1, si2;
	PROCESS_INFORMATION pi1, pi2;
	HANDLE hproc;
	ZeroMemory(&si1, sizeof(si1));
	si1.cb = sizeof(si1);
	ZeroMemory(&pi1, sizeof(pi1));
	ZeroMemory(&si2, sizeof(si2));
	si1.cb = sizeof(si1);
	ZeroMemory(&pi2, sizeof(pi2));

	if (argc != 3)
	{
		printf("Usage: %s[cmdline]\n", argv[1]);
		getchar();
		return;
	}
	if (!CreateProcess(NULL, argv[1], NULL, NULL, FALSE, 0, NULL, NULL, &si1, &pi1))
	{
		printf("Create Process error(%d)\n", GetLastError());
		getchar();
		return;
	}
	if (!CreateProcess(NULL, argv[2], NULL, NULL, FALSE, 0, NULL, NULL, &si2, &pi2))
	{
		printf("Create Process error(%d)\n", GetLastError());
		getchar();
		return;
	}
	printf("Handle of process %ld\n", pi1.hProcess);
	printf("ProcessID of process %ld\n", pi1.dwProcessId);
	printf("Handle of process %ld\n", pi2.hProcess);
	printf("ProcessID of process %ld\n", pi2.dwProcessId);
	printf("GetCurrentProcessId is %ld\n", GetCurrentProcessId());
	printf("GetCurrentThreadId is %ld\n",GetCurrentThreadId());
	printf("GetProcessId is %ld\n", GetProcessId(pi1.hProcess));
	printf("GetThreadId is %ld\n",GetThreadId(pi1.hThread));
	printf("GetProcessIdOfThread is %ld\n",GetProcessIdOfThread(pi1.hThread));

	CloseHandle(pi1.hThread);
	CloseHandle(pi1.hProcess);
	CloseHandle(pi2.hThread);
	CloseHandle(pi2.hProcess);

	getchar();
}
