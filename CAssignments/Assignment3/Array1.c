#include<stdio.h>
void main()
{

	int n,i,j,sum,sum1;
	printf("Enter size of an array:");
	scanf("%d",&n);
	int a[n];
	printf("\n Enter array numbers:");
	for(i=0;i<n;i++)
	{
		scanf("\n%d", &a[i]);
		}
	printf("\n Enter Sum:");
	scanf("%d",&sum);
	for(i=0;i<n-1;i++)
	{
		sum1= a[i];
		for(j=i+1;j<n;j++)
		{
		if(sum1==sum)
		{
		printf("Indexes are %d %d",i,j-1);
		break;
			
			}	
			else if(sum1 > sum || (sum==0&& sum1!=0) && j==n)
			{
			printf("\nNo sub array found");
			break;
		}
		sum1= sum1+a[j];
		
			
		}
		
	}
	
	}
	
    	

