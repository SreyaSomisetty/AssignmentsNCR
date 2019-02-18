#include<stdio.h>
#include<string.h>
int main()
{
	char text[100];
	int i=0,len,al=0,blanks=0,tab,digits=0;
	printf("Enter the string:");
	gets(text);
	while(text[i]!='\0')
	{
		i++;
	}
	len=i;
	for(i=0;i<len;i++)
	{
	if(((text[i]>='a')&&(text[i]<='z'))|| ((text[i]>='A')&&(text[i]<='Z')))
	{
	al++;	
	}
	else if(text[i]==' ')
       blanks++;
    else if((text[i]>='0')&&(text[i]<='9'))
        digits++;
	
	}
	printf("Letters are: %d \n Digits are: %d\n Blanks are: %d\n ",al,digits, blanks);
    
}
