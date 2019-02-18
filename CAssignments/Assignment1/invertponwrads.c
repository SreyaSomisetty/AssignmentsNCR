#include<stdio.h>
int main()
{
	int x, p, n, res;
	int invertponwards(int, int, int);
	printf("Eter integer, start position, invert length \n");
	scanf_s("%d %d %d", &x, &p, &n);
	printf(" binary value of %d is\t", x);
	res= invertponwards(x, p, n);
	
	return 0;
}

int invertponwards(int x, int p, int n)
{
	int i, y, lim, len=0, b[15];
	 
	while (x > 0)
	{
		b[len] = x% 2;
		x = x / 2;
		len++;
	};

	for (i = len - 1; i>=0; i--)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	lim = p + n;
	if (lim < len)
	{
		for (i = p + n - 1; i > p - 1; i--)
		{
			if (b[i] == 0)
				b[i] = 1;
			else
				b[i] = 0;
		}
	}
	else
	{
		printf("limit crossed");
	}

	printf("Inverted integer in binary form is \t");
	for (i = len- 1; i >=0; i--)
	{
		printf("%d ", b[i]);
	}

}
