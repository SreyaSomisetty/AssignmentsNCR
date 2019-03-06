#include<iostream> 
#include<cstring> 
using namespace std;

class String
{
private:
	char *s;
	int size;
public:
	String(const char *str = NULL); // constructor 
	~String() //Destructor
	{ 
		delete[] s;
	}
	String(const String&); // copy constructor 
	void print()
	{ cout << s << endl;
	} // Function to print string 
	void replace(const char *); // Function to replace 
};

String::String(const char *str)
{
	size = strlen(str);
	s = new char[size + 1];
	strcpy(s, str);
}

void String::replace(const char *str)
{
	delete[] s;
	size = strlen(str);
	s = new char[size + 1];
	strcpy(s, str);
}

String::String(const String& old_str)
{
	size = old_str.size;
	s = new char[size + 1];
	strcpy(s, old_str.s);
}

int main()
{
	String str1("Hello World");
	String str2 = str1;

	str1.print(); 
	str2.print();

	str2.replace("Hello Everyone");

	str1.print(); //After replacing
	str2.print();
	return 0;
}
