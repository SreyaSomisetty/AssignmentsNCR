#include<stdio.h>
void main()
{
	int n,sum,r,a;
	scanf("%d",&n);
	a=n;
	while (n>0)
	{
		r = n % 10;
		sum =sum+(r*r*r);
		n =n/10;
	}
	if (a==sum)
	{
		printf("Armstrong number");
	}
	else
		printf("Not Armstrong number");


}
