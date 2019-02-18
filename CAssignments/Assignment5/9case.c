#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	int i;
	char ch;
	fp=fopen("file3.txt", "r+");
	char s[100];
	printf("Enter line of characters:");
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		ch=s[i];
		if(ch>='a' && ch<='z')
		{
			ch=ch-32;
		}
		if(ch>='A' && ch<='Z')
		{
			ch=ch+32;
		}
		fputc(ch,fp);
	}
	
}
