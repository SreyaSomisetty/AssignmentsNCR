#include<stdio.h>
void print_complex(int,int);
enum operation{add=1,sub,mul
	};
	struct complex
{
  int real, img;
};

void main()
{
	int i;
	struct complex a,b,c;
	printf("\nEnter first complex number:");
	printf("\nreal1=");
	scanf("%d",&a.real);
	printf("\nimg1=");
	scanf("%d",&a.img);
	printf("\nEnter second complex number");
	printf("\nreal2=");
	scanf("%d",&b.real);
	printf("\nimg2=");
	scanf("%d",&b.img);
	printf("Enter operation to be performed \n1:Addition\n2.Subtraction\n3.Multiplication");
	scanf("\n%d",&i);
	switch(i)
	{
		case add:
			c.real=a.real+b.real;
			c.img=a.img+b.img;
			print_complex(c.real,c.img);
			break;
		case sub:
			c.real=a.real-b.real;
			c.img=a.img-b.img;
			print_complex(c.real,c.img);
		case mul:
			c.real=a.real*b.real;
			c.img=a.img*b.img;
			print_complex(c.real,c.img);
	}

}
void print_complex(int a,int b)
{
	printf("\nResult is %d + i %d",a,b);
}
