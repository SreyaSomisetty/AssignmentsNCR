#include<stdio.h>
int main()
{
	char *color[6] = { "red" , "green", "blue", "white", "black", "yellow" };
	printf(" color = %d\n ", color);
	printf(" \n(color+2) = %d\n ", (color + 2));
	printf(" \n*color = %s\n ", *color);
	printf(" \n*(color+2) = %s\n ", *(color + 2));
	printf(" \ncolor[5] = %d\n ", color[5]);
	printf(" \n*(color+5) = %s\n", *(color + 5));
}
