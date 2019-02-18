#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void main()
{
	char *str[60];
	int n,i,len,j;
	printf("Enter no of students:");
	scanf("%d", &n);
	char name[20],temp[30];
	for(i=0;i<n;i++)
	{
		printf("\nEnter name:");
		scanf("%s",name);
		len= strlen(name);
		str[i]= (char*) malloc(len* sizeof(char));
		if(str[i]==NULL){
			for(j=i;j>=0;j--)
			{
				free(str[j]);
			}
		}
		
		strcpy(*(str+i),name);
		
		//printf("%s",*(str+i));
		
		
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<n-i-1;j++)

         if(strcmp(str[i],str[i+1])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[i+1]);
            strcpy(str[i+1],temp);
         }
        // printf("\nAfter %s ",str[i]);
              }
              
 for(i=0;i<n;i++)
 
 {
 	printf("%s\n",str[i]);
 }
	
}
