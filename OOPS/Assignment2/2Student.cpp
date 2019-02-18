#include<iostream>
using namespace std;
class Student
{
	public:
	char *name;
	int rollno,m1,m2,m3;
	float total;
	char grade;
	
		void calcgrade()
		{
		  	total=(float)(m1+m2+m3)/3;
		if(total>80 && total<=100)
		     grade='A';
		else if(total>60 && total<=80)
		      grade='B';
		else if(total>40 && total<=60)
		      grade='C';
		else
		 grade='F';
		
		}
	friend ostream& operator<<(ostream& cout,Student s);
	friend istream& operator>>(ostream& cin,Student &s);
		
};
istream& operator>>(istream& cin,Student &s)
{

	cin>>s.name;
	cin>>s.m1;
	cin>>s.m2;
	cin>>s.m3;
	s.calcgrade();
return (cin);
	 
}
ostream& operator<<(ostream& cout,Student s )
{
	cout<<"Name is:"<<s.name<<endl;
	cout<<"Marks are:"<<s.m1<<s.m2<<s.m3<<endl;
     cout<<s.grade;
	return cout;
}
void main()
{
	Student a;
	cin>>a;
	cout<<a;

}
