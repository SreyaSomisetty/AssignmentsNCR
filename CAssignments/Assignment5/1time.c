#include<stdio.h>
void main()
{
	struct time
	{
		int hr,min,sec;
	}s;
	printf("Enter hours");
	 scanf("%d",&s.hr);
	 printf("\nEnter minutes");
	 scanf("%d",&s.min);
	 printf("\nEnter seconds");
	 scanf("%d",&s.sec);
	 printf("%d:%d:%d",s.hr,s.min,s.sec);
}
