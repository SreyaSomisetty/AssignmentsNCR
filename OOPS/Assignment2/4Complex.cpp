#include<iostream>
using namespace std;
class Complex
{
	public:
	float img,real;
	
		Complex()
	{
		real=0;
		img=0;
	}
	Complex(float a,float b)
	{
		real=a;
		img=b;
	}
	Complex(Complex &c)
	{
		real=c.real;
		img=c.img;
	}
	Complex operator+(Complex c)
	{
		Complex res;
		res.real=real+c.real;
		res.img=img+c.img;
		return res;
	}
	Complex operator-(Complex c)
	{
		Complex res;
		res.real=real-c.real;
		res.img=img-c.img;
		return res;
	}
	Complex operator-()
	{
		Complex c;
		c.real=-real;
		c.img=-img;
		return c;
	}
	Complex operator++()
	{
		Complex c;
		c.real=++real;
		c.img=++img;
		return c;
	}
	Complex operator++(int x)
	{
		Complex c;
		c.real=real++;
		c.img=img++;
		return c;
	}
	Complex operator,(Complex c)
	{
		return c;
	}
		Complex operator=(Complex c)
	{
		real=c.real;
		img=c.img;
		return c;
	}
	
	friend ostream& operator<<(ostream& cout,Complex c);
	friend istream& operator>>(istream& cin,Complex &c);
};
 

ostream& operator<<(ostream& cout,Complex c)
{
	cout<<"real="<<c.real<<endl;
	cout<<"img="<<c.img<<endl;
	return cout;
	}
	
istream& operator>>(istream& cin,Complex &c)
{
	cout<<"Enter values:";
	cin>>c.real;
	cin>>c.img;
	return cin;
}
int main()
{
	Complex c1,c2(3.2,4.5),c3,c4,c5,c6,c7;
	cin>>c1;
	cout<<c1<<c2;
	cin>>c3;
	c3++;
	cout<<c3;
	cin>>c4;
	c5=c3+c4;
	cout<<c5;
	c6=c4-c1;
	cout<<c6;
	c7=++c6;
	cout<<c7;
	return 0;
	
}
