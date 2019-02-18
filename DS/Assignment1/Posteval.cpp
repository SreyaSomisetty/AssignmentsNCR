#include<iostream>
using namespace std;
struct _stack_
{
	int size;
	int *s;
	int top;
};
class Stack
{
	struct _stack_ sta;
	public:
	Stack();
	void push(int);
	int pop();
	int peak();
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
	sta.s=new int[n];
}
bool Stack:: IsFull()
{
	return (sta.top==(sta.size-1));
}
bool Stack:: IsEmpty()
{
	return (sta.top==-1);
}
void Stack::push(int ele)
{
	if(!IsFull())
	{
		sta.s[++sta.top]=ele;
	}
		else
	       cout<<"Stack is full";
}
int Stack::pop()
{
	int x=-999;
	if(!IsEmpty())
	{
		x=sta.s[sta.top--];
	}
	else
		cout<<"Stack is Empty";
    return x;
}
int Stack:: peak()
{
	int x=-999;
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
	char exp[10];
	cout<<"Enter a postfix expresiion:";
	cin>>exp;
	int len= strlen(exp);
	Stack a;
	a.getsize(strlen(exp));
	for(int i=0;i<len;i++)
	{
		if(isdigit(exp[i]))
		{
			a.push(exp[i]-'0');
		}
		else
		{
			int val1=a.pop();
			int val2= a.pop();
			switch(exp[i])
			{
				case '+': a.push(val1+val2);
				           break;
			    case '-': a.push(val2-val1);
				           break;
			    case '*':a.push(val2*val1);
							break;
				case '/':a.push(val2/val1);
							break;
		    }
		}
	}
	int res=a.pop();
	cout<<"\nValue is:"<<res;
	return 0;
}
				          
	
