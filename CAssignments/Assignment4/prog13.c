#include<stdio.h>
int mgetline(char s[], int maxlimit);
void expand(char s1[], char s2[]);

int main(void)
{
	char s1[50], s2[50];

	gets(s1);

	expand(s1, s2);

	printf("%s", s2);

	return 0;
}


void expand(char s1[], char s2[])
{
	int i, j, c;

	i = j = 0;

	while ((c = s1[i++]) != '\0')
		if (s1[i] == '-' && s1[i + 1] >= c)
		{
			i++;
			while (c < s1[i])
				s2[j++] = c++;
		}
		else
			s2[j++] = c;

	s2[j] = '\0';
}
