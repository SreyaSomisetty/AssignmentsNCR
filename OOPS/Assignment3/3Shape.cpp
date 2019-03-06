#include <iostream>
using namespace std;
class Shape   // base class
{
protected:
	float l;
public:
	 void getDimension()
	{
		cout << "In Shape class";
	}

	// virtual Function
 virtual void display_area()
	{
		cout << "In Shape";
	}
};

class Square : public Shape
{
public:
	int side;
	void getDimension()
	{
		cin >> side;
	}

	void display_area()
	{
		cout<<"The area of Square is:"<< side * side;
	}
};

class Triangle : public Shape
{
public:
	float length, breadth;
	void getDimension()
	{
		cin >> length;
		cin>> breadth;
	}
	void display_area()
	{
	  cout<<"The area of Traingle is:"<< 0.5*length*breadth;
	}
};
class Rectangle : public Shape
{
public:
	float length, breadth;
	void getDimension()
	{
		cin >> length;
		cin >> breadth;
	}
	void display_area()
	{
		cout << "The area of Rectangle is:" <<length*breadth;
	}
};


int main()
{
	//Shape *shape;
	Square s;
	Triangle t;
	Rectangle r;
	//shape = &s;
	//shape->display_area();
	cout << "Enter length to calculate the area of a square: ";
	s.getDimension();
	s.display_area();
	cout << "\nEnter length and breadth to calculate the area of Triangle: ";
	t.getDimension();
	t.display_area();
	cout << "\nEnter length and breadth to calculate the area of Rectangle: ";
	r.getDimension();
	r.display_area();


	return 0;
}