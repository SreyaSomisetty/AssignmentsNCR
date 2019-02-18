#include<iostream>
#include<math.h>
using namespace std;
//class point1;
class point1
{
	float x,y;
	public:
		void input()
		{
			cout<<"Enter point:";
			cin>>x>>y;
		}
		void display()
		{
			cout<<"("<<x<<","<<y<<")";
			
		}
		friend float distance(point1,point1);
};
float distance(point1 a,point1 b)
{
	float d;
	d=sqrt(pow((b.x-a.x),2) +pow((b.y-a.y),2));
	cout<<"The distance is:"<< d;
	return d;
}
int main()
{
	point1 p,q;
	p.input();
	q.input();
	distance(p,q);	
	return 0;
}
