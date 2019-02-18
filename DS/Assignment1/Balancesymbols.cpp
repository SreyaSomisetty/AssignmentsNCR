#include<iostream>
using namespace std;
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
	char str[20];
	cout<<"Enter an expression";
	cin>>str;
	Stack a;
	int flag;
	int len=strlen(str);
	a.getsize(len);
	for(int i=0;i<len;i++)
	{
		char ch=str[i];
		switch(ch)
		{
			case '(':
			case '{':
		    case '[': a.push(ch);
				       break;
		   case '}':
		   case  ']':
		   case ')':if(!a.IsEmpty())
		    {
		    if((ch==')' && a.peak()=='(') || (ch==']' && a.peak()=='[')|| (ch=='}' && a.peak()=='{'))
			    {
					a.pop();
					count--;
		       break;
			}
			else
			{
				flag=1;
			    break;
			}
		}
		   else
			   flag=1;
		       break;
		
			   
	}
	}	
	if(!a.IsEmpty())
	   flag=1;
	if(flag==1 ){
		cout<<"Not Balanced";
			
	}
	else
		cout<<"Balanced";

}