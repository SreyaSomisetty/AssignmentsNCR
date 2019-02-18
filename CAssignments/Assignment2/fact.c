#include<stdio.h>
int fact(int);
int main()
{
	int n,val;
	printf("Enter a value:");
	scanf("%d",&n);
	val= fact(n);
	printf("Factorial is: %d", val);
	return 0;
}
 int fact(int n)
 {
 	if(n==0|| n==1)
 	 return 1;
 	else
 	{
	 return n*fact(n-1);
	 }
 }
