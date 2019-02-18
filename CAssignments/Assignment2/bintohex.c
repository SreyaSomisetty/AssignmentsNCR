#include<stdio.h>
#include<math.h>
int main()
{
	 int n,r,val=0,i=0,j,k=0;
	 int r1[10];
	 printf("Enter binary value:");
	 scanf("%d",&n);
	 while(n!=0){
    	r=n%10;
    	val+=(r*pow(2,k));
    	n=n/10;
    	k++;
	}
	 
	 printf("%d\n",val);
	 while(val!=0)
    {
    r=val%16;
    if(r>=0 || r<=9){
    r1[i]=r;
    
	}
  else{
  
    switch(r)
    {
    	case 10:
    		r1[i]='A';
    		break;
    	case 11:
    		r1[i]='B';
    		break;
    	case 12:
    		r1[i]='C';
    		break;
    	case 13:
    		r1[i]='D';
    		break;
    	case 14:
    		r1[i]='E';
    		break;
    	case 15:
    		r1[i]='F';
    		break;
  }
    
	}
	
    val=val/16;
	 i++;  
	}
	for(j=i-1;j>=0;j--)
{
		printf("%d",r1[j]);
	}
	
	  return 0;
}
