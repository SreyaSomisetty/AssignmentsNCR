#include<stdio.h>
void main()
{
	char * s [ ] = { "we will teach you how to ", "Move a mountain " ,"Level a building " , "Erase the past", "Make a million" };
     //printf("%s", *(s));
     int j, count=0;
     for(j=0;j<5;j++)
     {
     	
     char *a=*(s+j);
     int i;
     for(i=0;a[i]!='\0';i++)
     {
      if(a[i]=='e')
	  {
	  	count++;
		  }	
	 }
	 
}
printf("count of e is:%d\n",count);
}
