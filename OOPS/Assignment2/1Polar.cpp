#include<iostream>
using namespace std;
class Polar
{
	float r,angle;
	
	public:
		static int count;
	Polar()
	{
		r=0;
		angle=0;
	 count++;	
	}
	Polar(float i,float j)
	{
		r=i;
		angle=j;
		count++;
	}
	Polar(Polar &p)
	{
		r=p.r;
		angle=p.angle;
		count++;
	}
	void display()
	{
		cout<<"Count value:"<<count;
	}
};
int Polar::count;

int main()
{
	Polar a,b(2.1,5.3),c(a);
    a.display();
	return 0;
}
