#include<stdio.h>
inline int add(int a,int b)
{
	return a+b;
}
inline int sub(int a,int b)
{
	return a-b;
}
inline long int mul(int a,int b)
{
	return a*b;
}
inline float div(float a,float b)
{
	return a/b;
	
}
int main()
{
	int p,q;
	printf("Enter two numbers:");
	scanf("%d %d",&p,&q);
	printf("\nAddition result is:");
    add(p,q);
    printf("\nSubtraction result is:");
    sub(p,q);
    printf("\n Multiplication result is:");
    mul(p,q);
    
}

