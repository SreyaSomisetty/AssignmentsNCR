#include<stdio.h>
void main()
{
	int n,i=0,j,r,bin[10],count=0;
	printf("Enter a value:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		bin[i]=r ;
		n=n/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",bin[j]);
	}
	
}
