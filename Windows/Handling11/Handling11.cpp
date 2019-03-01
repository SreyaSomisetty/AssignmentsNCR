#include<Windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<tchar.h>
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
