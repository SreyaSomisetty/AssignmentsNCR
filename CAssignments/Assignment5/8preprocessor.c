#include<stdio.h>
#define print(s) printf("token"#s"=%d",token##s)
void main()
{
	int token9=100;
	print(9);
}
