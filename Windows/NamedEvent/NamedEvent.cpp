#include<Windows.h>
#include<stdio.h>
int main()
{
	HANDLE hEvent = CreateEvent(NULL, FALSE, FALSE, TEXT("namedevent"));
	//CloseHandle(hEvent);
	getchar();
	return 1;
}