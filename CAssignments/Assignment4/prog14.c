#include<stdio.h>
void main()
{
	char s[10],a[10],temp;
	int i;
	printf("enter a string");
	scanf("%s", s);
	int k = strlen(s);

	while (k != 0)
	{
		temp = s[0];
		for (i = 0; i < strlen(s) - 1; i++)
		{
			s[i] = s[i + 1];


		}
		s[i] = temp;
		printf("\n%s", s);
		k--;
	}
}
