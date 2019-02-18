#include<stdio.h>
void main()
{
	int i,j,n,m;
    printf("Enter no of lines:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=n-i;j>=0;j--)
	{
	printf(" ")	;
    }
	//printf("%d\n",i);
	m=i;
	while(m!=1)
	{
			
		printf("%d", m);
	m--;
		}
		
	while(m<=i)
	{
        
		printf("%d",m);
		m++;
		}
		printf("\n");	
}
}
