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
	int n;
	cout<<"Enter size of stack";
	cin>>n;
	Stack a;
	a.getsize(n);
	cout<<"\n Enter all elements:";
	for(int i=0;i<n;i++)
	{ 
       int e;
	   cin>>e;
		a.push(e);
	}
		cout<<"\n Display all elements\n";
	a.display();
	a.pop();
	a.pop();
	int k=a.peak();
	cout<<"\nPeak element is:"<<k;
	cout<<"\nDisplay after popping\n";
	a.display();
	return 0;
}
	
	