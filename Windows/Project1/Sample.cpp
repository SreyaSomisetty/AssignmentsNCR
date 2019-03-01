#include<iostream>
#include<Windows.h>
#include<stdio.h>

using namespace std;

int main()
{
	int q;
	char c = 'A';
	wchar_t p = L'A';
	cout << "Size of char" << sizeof(c) << endl;
	cout << "Size of w_char" << sizeof(p) << endl;
	printf("wchar_t %C\n", p);
	printf("char %c\n", c);
	char s[10] = "hey hi";
	wchar_t l[10] = L"hey hello";
	printf("wchar_t %S\n", l);
	printf("char %s\n", s);
	int size;
	size = MultiByteToWideChar(CP_UTF8,
		0,
		s,
		-1,
		NULL,
		0);
	if (size == 0)
		printf("error is %d", GetLastError());
	char a[20];
	int i;
	i = WideCharToMultiByte(CP_UTF8, 0, l, -1, a, 0, NULL, NULL);
	if (i == 0)
		printf("error is %d", GetLastError());



	cin >> q;//to stop the console from shutting down
	return 0;
}
