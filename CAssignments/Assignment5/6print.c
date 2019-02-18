#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fp=fopen("sample.txt","r");
	if(fp==NULL)
	{
		printf("cannot open file");
		return;
	}
	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}
	fclose(fp);
}
