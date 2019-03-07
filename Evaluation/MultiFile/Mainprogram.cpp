#include<iostream>
#include<string>
#include<stack>
using namespace std;
double division(double, double);
double addition(double, double);
double subtraction(double, double);
double multiplication(double, double);
bool balancingParanthesis(string expression)
{
	stack<char> sta;
	char ch;
	for (int i = 0; i < expression.length(); i++)
	{
		if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
		{
			sta.push(expression[i]);
			continue;
		}
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

int Evaluation(string str) {
	stack<double> stackeval;
	double val1, val2;
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]))
		{
			double a = (double)str[i];
			stackeval.push(a -'0');
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
			case '/': res = division(val2, val1);
				stackeval.push(res);
				break;

			}
		
		}

	}
	cout << endl << "result is " << stackeval.top();
	return 0;
}

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
	case ')':return 6;
		break;
	case ']':return 5;
		break;
	case '}':return 4;
		break;
	default: return -1;
		break;

	}
}
int main()
{
	stack<char> schar;
	string inputStr, postfixnew;
	cout << "enter an equation :";
	cin >> inputStr;
	if (!balancingParanthesis(inputStr))
	{
		cout << "Invalid input" << endl;
		getchar();
		return 0;
	}
	else
	{
     int len = inputStr.length();
		char c;
		for (int i = 0; i < len; i++)
		{
			char ch = inputStr[i];
			if (ch >= '0'&&ch <= '9')
			{
				postfixnew += ch;

			}
			else
			{
				if (schar.empty())
				{
					schar.push(ch);
					ch = schar.top();
				}
				else
				{
					if (check(ch) > check(schar.top()))
					{
						if (check(ch) == 6)
						{
							while (schar.top() != '(')
							{
								postfixnew += schar.top();

								schar.pop();

							}
							schar.pop();

						}
						else if (check(ch) == 5)
						{
							while (schar.top() != '[')
							{
								postfixnew += schar.top();

								schar.pop();

							}
							schar.pop();

						}
						else if (check(ch) == 4)
						{
							while (schar.top() != '{')
							{
								postfixnew += schar.top();

								schar.pop();

							}
							schar.pop();

						}
						else
							schar.push(ch);
					}

					else
					{
						if (check(ch) == -1)
						{
							schar.push(ch);
						}
						else
						{
							while (!schar.empty())
							{
								if (schar.top() != '(' && schar.top() != '['&&schar.top() != '{')
								{
									postfixnew += schar.top();
									schar.pop();
								}
								else
									break;
							}

							schar.push(ch);

						}
					}
				}
			}
		}
		while (!schar.empty())
		{
			postfixnew += schar.top();
			schar.pop();
		}


		Evaluation(postfixnew);
	}
	getchar();
	return 0;
}
