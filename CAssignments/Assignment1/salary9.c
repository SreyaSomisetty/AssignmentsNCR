#include<stdio.h>
void main()
{
int n,b,hra=0,da=0,gross;
printf("enter base salary");
scanf("%d", &n);
b = n;
	if (n >= 1 && n <= 4000)
	{
	hra = b * 0.1;
	da = b * 0.5;
	}
	else if (n >= 4001 && n <= 8000)
	{
	hra = b * 0.2;
	da = b * 0.6;
	}
	else if (n >= 8001 && n <= 12000)
	{
	hra = b * 0.25;
	da = b * 0.7;
	}
	else
	{
	hra = b * 0.3;
	da = b * 0.8;
	}
	gross = b + hra + da;
	printf("%d", gross);
}
