#include<Windows.h>
#include<stdio.h>
#include<iostream>
#include "Mylib.h"
using namespace std;
int main()
{
	int res, nLeft, nRight, ch=0;
	cout << "Enter two integers:";
	cin >> nLeft;
	cin >> nRight;
	cout << "Enter an operation to be performed.\n1.Add\n2.Sub\n3.Mul\n4.Div\n";
	while (ch <= 4)
	{
		switch (ch)
		{
		case 1: res = add(nLeft, nRight);
			cout << "Addition result is:" << res << endl;
			break;
		case 2: res = sub(nLeft, nRight);
			cout << "Subtrtaction value is:" << res << endl;
			break;
		case 3:	 res = mul(nLeft, nRight);
			cout << "Multiplication value is:" << res << endl;
			break;
		case 4:res = divi(nLeft, nRight);
			cout << "Division value is:" << res << endl;
			break;
		}
		cout << "Choose another operation:";
		cin >> ch;
	}
	return 0;
}