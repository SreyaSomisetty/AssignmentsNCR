#include<stdio.h>
#include<string.h>
void main()
{
	char s[30];
	int i;
	printf("Enter string :");
	gets(s);
	for(i=0;i< strlen(s);i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s[i]= toupper(s[i]);
		}
		else
		{
			s[i]=tolower(s[i]);
		}
	}
	printf("\nConverted string is ");
	puts(s);
}
