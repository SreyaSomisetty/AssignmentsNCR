#include<stdio.h>
void main()
{
char *color[6] = {"red", "green", "blue", "white", "black", "yellow"};
printf("i. %d",color);
printf("\nii. %d",color+2);
printf("\n iii. %s", *color);	
}
