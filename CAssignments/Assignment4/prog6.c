#include<stdio.h>
#include<string.h>
void reverse(char [],int ,int);
void main()
{
  char s[20];
  printf("Enter a string:");
  gets(s);
  int len=strlen(s);
  reverse( s, 0,len-1 );
  	
}
 void reverse (char a[], int i,int j)
 {
 	//j=strlen(a);
 //	printf("%d",i);
 	if(i>=j)
 	{
 		printf("%s",a);
 		return;
	 }
    char temp;
    temp=a[i];
    a[i]=a[j];
	a[j]=temp;
	i++;
	j--;
	reverse(a, i, j);
	

 }
