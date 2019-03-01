#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<tchar.h>
long g_x = 0;
DWORD WINAPI thread_func1(LPVOID lparam)
{
	//InterlockedExchangeAdd(&g_x, 1);
	g_x++;
	return 0;
}
DWORD WINAPI thread_func2(LPVOID lparam)
{
	InterlockedExchangeAdd(&g_x, 1);
	//g_x++;
	return 0;
}


int main()
{
	
	DWORD thID1,thID2;
	HANDLE hThread1,hThread2;
	HANDLE arry_hand[2];

	while (1)
	{
		g_x = 0;
		hThread1 = CreateThread(NULL, 0, thread_func1, NULL, 0, &thID1);
		if (hThread1 == NULL)
		{
			printf("Unable to create thread.Error(%d)\n", GetLastError());
			getchar();
			return 1;

		}
		hThread2 = CreateThread(NULL, 0, thread_func2, NULL, 0, &thID2);
		if (hThread2 == NULL)
		{
			printf("Unable to create thread.Error(%d)\n", GetLastError());
			getchar();
			return 1;

		}
		arry_hand[0] = hThread1;
		arry_hand[1] = hThread2;
		WaitForMultipleObjects(2, arry_hand, TRUE, INFINITE);
		printf("g_x value %ld \n", g_x);
		if (g_x == 1)
			break;
	}
		CloseHandle(hThread1);
		CloseHandle(hThread2);
		printf("Waiting for user input before exiting the process");
		getchar();
	
	return 0;
}