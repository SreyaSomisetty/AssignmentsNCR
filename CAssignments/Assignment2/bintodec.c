#include<stdio.h>
#include<math.h>
int main()
{
	 int n,r,val=0,i=0;
	 printf("Enter binary value:");
	 scanf("%d",&n);
	 while(n!=0){
    	r=n%10;
    	val+=(r*pow(2,i));
    	n=n/10;
    	i++;
	}
	 
	 printf("%d",val);
	  return 0;
}
