#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void expand(char s1[], char s2[]);
int validrange(char c1, char c2);

int main(void)
{
	char s1[50];
	char s2[50];
	printf("Enter a string:");
	gets_s(s1);
	expand(s1, s2);
	printf("%s\n", s2);
	system("pause");
	getchar();
	return EXIT_SUCCESS;
}

void expand(char s1[], char s2[])//Expands the given string
{
	int i, j;
	for (i = 0,j = 0; s1[i] != '\0'; ++i) {
		if (s1[i] == '-') {
			if (s1[i + 1] == '-')
			{
				printf("Incorrect input");
				exit(0);
			}
			if (i == 0 || s1[i + 1] == '\0') {
				/* '-' is leading or trailing, so just copy it. */
				s2[j++] = s1[i];
			}
			else {
				/* check if this is a valid range. */
				if (validrange(s1[i - 1], s1[i + 1]))
				{
					while (s2[j - 1] < s1[i + 1])
					{
						s2[j] = s2[j - 1] + 1;
						j++;
					}
					/* skip next character we already printed it. */
					++i;
				}
				else {
					//s2[j++] = s1[i];
					printf("Not a valid range");
					exit(0);
				}
			}
		}
		else {
			s2[j++] = s1[i];
		}
	}
	
	s2[j] = '\0';
}

/* validrange:  returns non-zero if c1-c2 is a valid range. */
int validrange(char c1, char c2)
{
	if (('a' <= c1 && c1 <= 'z') && /* valid range in a-z */
		(c1 <= c2 && c2 <= 'z'))
		return 1;
	if (('A' <= c1 && c1 <= 'Z') && /* valid range in A-Z */
		(c1 <= c2 && c2 <= 'Z'))
		return 1;
	if (('0' <= c1 && c1 <= '9') && /* valid range in 0-9 */
		(c1 <= c2 && c2 <= '9'))
		return 1;

	return 1;   /* not a valid range */
}