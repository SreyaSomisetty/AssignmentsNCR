#include<iostream>
#include<cstring>
#include<stack>
#include<queue>
using namespace std;
double division(double, double);
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
//Evaluating the expression
int Evaluation(string str) {
	stack<double> stackeval;
	double val1,val2;
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]))
		{
			double val = (double)str[i];//Typecasting char value
			stackeval.push(val - '0');
		}
		else
		{
			double res;
			val1 = stackeval.top();
			stackeval.pop();
			val2 = stackeval.top();
			stackeval.pop();
			switch (str[i])
			{
			case '*': res = multiplication(val1, val2);
				stackeval.push(res);
				break;
			case '+':  res = addition(val1, val2);
				stackeval.push(res);
				break;
			case '-': res = subtraction(val1, val2);
				stackeval.push(res);
				break;
			case '/': res = division(val1, val2);
				stackeval.push(res);
				break;

			}
		}

	}
	cout<< "Result of entered string is " << stackeval.top()<<endl;
	return 0;
}
//Validating whether it is balanced or not
bool ValidString(string expression)
{
	stack<char> sta;
	char ch;
	for (int i = 0; i<expression.length(); i++)
	{
		if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
		{
			sta.push(expression[i]);
			continue;
		}
		if (sta.empty())
			return true;

		switch (expression[i])
		{
		case ')':

			ch = sta.top();
			sta.pop();
			if (ch == '{' || ch == '[')
				return false;
			break;

		case '}':

			ch = sta.top();
			sta.pop();
			if (ch == '(' || ch == '[')
				return false;
			break;

		case ']':

			ch = sta.top();
			sta.pop();
			if (ch == '(' || ch == '{')
				return false;
			break;
		}
	}
	return (sta.empty());
}
//Priority check of operators
int check(char ch)
{
	switch (ch)
	{
	case '+':
	case '-':
		return 1;
		break;
	case  '*':
	case '/':
		return 2;
		break;
	default: return -1;
		break;

	}
}
int main()
{
	stack<char> schar;
	string inputStr, postfixnew, postfixresult;
	cout << "Enter the input string:";
	cin >> inputStr;
	if (!ValidString(inputStr))//Valid or not
	{
		cout << "Input is not valid";
		getchar();
		return 0;
	}
	else
	{
		int size = inputStr.length();
		char c;

		for (int i = 0; i < size; i++)
		{
			if (isdigit(inputStr[i]))
			{
				postfixnew += inputStr[i];
			}
			else if (inputStr[i] == '(')
			{
				schar.push(inputStr[i]);
			}
			else if (inputStr[i] == ')')
			{
				while (!schar.empty() && schar.top() != '(')
				{
					c = schar.top();
					schar.pop();
					postfixnew += c;
				}
				if (schar.top() == '(') {
					c = schar.top();
					schar.top();
				}
			}
			else
			{
				while (!schar.empty() && check(inputStr[i]) <= check(schar.top())) {
					c = schar.top();
					schar.pop();
					postfixnew += c;
				}
				schar.push(inputStr[i]);
			}
		}
		while (!schar.empty()) {
			c = schar.top();
			schar.pop();
			postfixnew += c;
		}
		for (int i = 0; i < size; i++) {
			if (postfixnew[i] == '(') {
				continue;
			}
			postfixresult += postfixnew[i];
		}
		Evaluation(postfixresult);//Evaluate the string
	}
	system("pause");
	getchar();
	return 0;
}
