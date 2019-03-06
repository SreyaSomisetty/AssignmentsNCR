#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
template <typename T>
struct _stack_
{
	int size;
	T *s;
	int top;
};
template <class T>
class Stack
{
	struct _stack_<T> sta;
public:
	Stack(int);
	void push(T);
	void pop();
	T peak();
	bool IsEmpty();
	bool IsFull();
	void display();
	//void getsize(int);
	~Stack();
};
template <class T>
Stack<T>:: ~Stack()
{
	delete sta.s;
}
template <class T>
Stack<T>::Stack(int s)
{
	sta.top = -1;
	sta.size = s;
	sta.s = new T[s];
	
}
template <class T>
bool Stack<T>::IsFull()
{
	return (sta.top == (sta.size - 1));
}

	template <class T>
bool Stack<T>::IsEmpty()
{
	return (sta.top == -1);
}
template <class T>
void Stack<T>::push(T ele)
{
	if (!IsFull())
	{
		sta.s[++sta.top] = ele;
	}
	else
		cout << "Stack is full";
}
template <class T>
void Stack<T>::pop()
{
	T x;
	if (!IsEmpty())
	{
		x = sta.s[sta.top--];
		cout << "Popped element is " << x<<endl;
	}
	else
		cout << "Stack is Empty";
	
}
template <class T>
T Stack<T>::peak()
{
	T x;
	if (!IsEmpty())
	{
		x = sta.s[sta.top];
	}
	else
		cout << "Stack is Empty";
	return x;
}
template <class T>
void Stack<T>::display()
{
	for (int i = 0; i <= sta.top; i++)
		cout << sta.s[i] << endl;
}
 template <class T>
 void operation(Stack<T> a)
 {
	 int ch;
	 T ele;
	 cout << "\n 1.Push";
	 cout << "\n 2.Pop";
	 cout << "\n 3.Display\n";
 do
	 {
		 cout << "Enter your choice:";
		 cin >> ch;
		 switch (ch)
		 {
		 case 1:
			 cout << "Enter a value to be inserted\n";
			 cin >> ele;
			 a.push(ele);
			 break;

		 case 2:
			 a.pop();
			 break;

		 case 3:
			 a.display();
			 break;
		 }

	 } while (ch != 3);

 }

int main()
{
	int ch, size1;
	cout << "\n 1.Integer stack";
	cout << "\n 2.Float stack";
	cout << "\n 3.Character stack";

   cout << "\nEnter the size of stack\n";
	cin >> size1;
	do
	{
		cout << "enter your choice\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
			Stack<int> a1(size1);//Integer array
		operation(a1);
		break;
		}

		case 2:
		{
			Stack<float> b(size1);//Float array
			operation(b);
			break;
		}

		case 3:
		{
			Stack <char> c(size1);//Character array
			operation(c);
			break;
		}
		default: break;
          }

		cout << "\n 1.Integer stack";
		cout << "\n 2.Float stack";
		cout << "\n 3.Character stack";

	} while (ch != 4);
	getchar();

	return 0;
}

