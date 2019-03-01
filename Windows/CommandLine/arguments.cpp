#include<Windows.h>
#include<tchar.h>
#include<stdio.h>
int _tmain(int argc ,TCHAR *argv[])
{
	LPWSTR *szArglist;
	int nArgs=argc;
	szArglist = CommandLineToArgvW(GetCommandLineW(), &nArgs);
	if (NULL == szArglist)
	{
		wprintf(L"Command Line is empty");
		return 0;
	}
	else
	{
		for (int i = 0; i < nArgs; i++)
			printf("%d : %hS \n", i, argv[i]);
	}
	getchar();
	return 0;
}