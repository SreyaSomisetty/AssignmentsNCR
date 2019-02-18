#include<stdio.h>
void main()
{
	int n,count=0,sum=0,max=0,min=0;
	float avg;
	while (1)
	{
		printf("\n enter a posive number");
		scanf("%d", &n);
		if (n <= 0)
		{
			printf("count = %d", count);
			printf("\nmax = %d", max);
			printf("\nmin = %d", min);
			printf("\nsum = %d", sum);
			printf("\navg = %f", avg);
			return;
		}
		else
		{
			count++;
			if (n > max)
			{
				max = n;
			}
			else if (n < min)

			{
				min = n;
			}
			sum = sum + n;
			avg = sum / count;
		}
		
	}
	
}
