#include<stdio.h>
int main(int argc,char **argv)
{
	if(argc!=2)
	{
	printf("Invalid no of arguments");	
	}
	FILE *fp;
	char ch[20],a;
	unsigned char ch1;
	int len;
	fp=fopen(argv[1],"w+");
	if(fp==NULL)
	{
		printf("Cannot open file");
		return;
	}
	 gets(ch);
	     len=strlen(ch);
	     for(int i=0;i<len;i++)
	     {
	     	a=ch[i];
	     	fputc(a,fp);
	     	
		 }
	  fseek(fp,-(len),SEEK_END); 
	while(!feof(fp))
    {
	    ch1=fgetc(fp);
	    printf("%u ",~ch1);
		//fputc(~ch1,fp);	
	  	
	}	
	fclose(fp);
}
