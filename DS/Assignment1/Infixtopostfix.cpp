#include<iostream>
#include<conio.h>
using namespace std;
int fun1(char);
struct _stack_
{
	int size;
	char *s;
	int top;
};
class Stack
{
	struct _stack_ sta;
	public:
	Stack();
	void push(char);
	char pop();
	char peak();
	bool IsEmpty();
	bool IsFull();
	void display();
	void getsize(int);
	~Stack();
};
Stack:: ~Stack()
{
	delete sta.s;
}
Stack:: Stack()
{
	sta.top=-1;
	sta.s=NULL;
	sta.size=0;
}
void Stack::getsize(int n)
{
	sta.size=n;
	sta.s=new char[n];
}
bool Stack:: IsFull()
{
	return (sta.top==(sta.size-1));
}
bool Stack:: IsEmpty()
{
	return (sta.top==-1);
}
void Stack::push(char ele)
{
	if(!IsFull())
	{
		sta.s[++sta.top]=ele;
	}
		else
	       cout<<"Stack is full";
}
char Stack::pop()
{
     char x;
	if(!IsEmpty())
	{
		x=sta.s[sta.top--];
	}
	else
		cout<<"Stack is Empty";
    return x;
}
char Stack:: peak()
{
	char x;
	if(!IsEmpty())
	{
		x=sta.s[sta.top];
	}
	else
		cout<<"Stack is Empty";
    return x;
}
void Stack::display()
{
	for(int i=0;i<=sta.top;i++)
	   cout<<sta.s[i]<<endl;
}
int main()
{
	char s1[20],s2[20];
	cout<<"Enter an expression";
	cin>>s1;
	Stack a;
	char c;
	int len=strlen(s1);
	a.getsize(len);
	//cout<<s1[i];
	for(int i=0;i<len;i++)
	{
		if(isdigit(s1[i])!=0 && isalpha(s1[i])!=0)
		{
			cout<<s1[i];
		}
	    
	    else
			if(fun1(s1[i])> fun1(a.peak()))
			{
				a.push(s1[i]);
				break;
			}
		else{
			 c=a.pop();
			cout<<c;
			a.push(s1[i]);
			break;
		}
			 
			
			
	}
	
}
int fun1(char e)
	{
	  switch(e)
	  {
		  case '+':
		  case '-':
		             return 2;
          case  '*':
		  case '/' :return 3;
		  case '(':
		            return 4;
		  case ')':
		            return 1;
	  }
	}
