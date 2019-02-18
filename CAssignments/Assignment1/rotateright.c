#include<stdio.h>
#include<math.h>
int rotate_right(int, int);
void main()
{
	int n = 0, b = 0, res = 0;
	printf("Enter the number");
	scanf("%d", &n);
	printf("Enter number of bits to be rotated");
	scanf("%d", &b);
	res = rotate_right(n, b);
	printf("result =%d", res);
}
int rotate_right(int n, int b)
{
	int res = n / pow(2, b);
	return res;
}
