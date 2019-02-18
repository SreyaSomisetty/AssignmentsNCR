#include<stdio.h>
int main()
{
	int a,b,ch,res;
	
	printf("Enter two no's:");
	scanf("%d\n %d", &a,&b);
	printf("\nChoose operation:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			res=add(a,b);
			break;
		case 2:
			res=sub(a,b);
			break;
		case 3:
		res=mul(a,b);
			break;
		default:
			printf("Choose correct operation");
			break;
	}
	printf("\nResult is: %d", res);
	return 0;
}
