#include<stdio.h>
void main()
{
	struct a
	{
		int i;
		char c;
	}s;
	union b
	{
		int i;
		char c;
	}p;
	
	printf("Size of struct %d",sizeof(s));
	printf("\nSize of union %d",sizeof(p));
	
	
}
