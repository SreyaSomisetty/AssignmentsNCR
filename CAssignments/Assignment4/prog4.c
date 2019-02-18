#include<stdio.h>
int replace(char *);
void main()
{
	char *cat ="The cat sat";        
	int n ;
	n= replace( cat ); 
	printf("\n n is %d",n);

}
int replace(char *p)
{
	int i,count=0;
	for(i=0;p[i]!='\0';i++)
	{
		if(p[i]==' ')
		{
			p[i]='-';
			count++;
		}
		
	}
	printf("%s",p);
	return count;
}
