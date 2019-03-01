#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<tchar.h>
DWORD WINAPI thread_func(LPVOID lparam)
{
	for (int i = 0; i<10; i++)
	{
		printf("i=(%d)\n", i);
		Sleep(1000);
	}
	return 0;
}
int main()
{
	DWORD thID1;// thID2;
	HANDLE hThread1;// hThread2;
	hThread1 = CreateThread(NULL, 0, thread_func, NULL, 0, &thID1);
	if (hThread1 ==NULL)
	{
		printf("Unable to create thread.Error(%d)\n",GetLastError());
		getchar();
		return 1;

	}
	CloseHandle(hThread1);
	getchar();
	return 0;
}