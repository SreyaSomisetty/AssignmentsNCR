#include<stdio.h>
void main()
{
	int val= 0xCAFE;
	unsigned int res,res1,res2;
	res= (0xCAFE & 0x000F);
	
	if(res==14||11||7||13||15)
	{
		printf("(i) On\n");
	}
	else
	printf("Off\n");
	
	res1=0xCAFE & 0xFF00;
	res1=res1>>8;
	printf("%X\n",res1);
	res2 = 0XCAFE & 0x00FF;
	res2= res2<<8;
	printf("00%X\n",res2);   
	res= res2|res1;
	printf("(ii)%X\n",res);
	
     res1= 0xCAFE & 0x000F;
     res1=res1<<12;
     res2= 0xCAFE & 0xFFF0;
     res2=res2>>4;
     res=res2|res1;
     printf("(iii)%X", res);
     
	
	
}
