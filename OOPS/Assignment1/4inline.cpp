#include<iostream>
using namespace std;
inline int add(int a,int b)
{
	return a+b;
}
inline int sub(int a,int b)
{
	return a-b;
}
inline long int mul(int a,int b)
{
	return a*b;
}
inline float div(float a,float b)
{
	return a/b;
	
}
int main()
{
	int p,q;
	cout<<"Enter two numbers:";
	cin>>p>>q;
	cout<<"\nAddition result is:"<<add(p,q);
    cout<<"\nSubtraction result is:"<<sub(p,q);
    cout<<"\n Multiplication result is:"<<mul(p,q);
    return 0;
}

