#include<stdio.h>
#include<string.h>
void main()
{
	char s[20],s1[20],ch,c;
	int i,j=0,k;
	printf("Enter a string:");
	gets(s);
	printf("\nEnter a character to be deleted:");
	scanf("%c",&ch);
	for(i=0;i<strlen(s);i++)
	
	{
	if(s[i]!=ch )
		{
		   c=s[i];
		  s1[j]=c;
		  j++;
	}
}
 s1[j]='\0';
		  
		  
		  
	  
	printf("The string is: %s",s1);
	
}
