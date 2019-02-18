#include<stdio.h>
void main()
{
	char s1[10], s2[10];
	printf("enter two strings");
	gets(s1);
	gets(s2);
	for (int i = 0; i < strlen(s1); i++)
	{
		for (int j = 0; j < strlen(s2); j++)
		{
		
			
				
				if (s1[i] == s2[j])
				{
					printf("match found at %d", i);
					return;
				}
		}
	}
}
