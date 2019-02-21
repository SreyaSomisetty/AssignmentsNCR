#include<iostream>
using namespace std;
void main()
{
	int i,j,n,flag=0;
	cout<<"Enter number of elements:";
	cin>>n;
	int a[10];
	cout<<"\nEnter array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
	cout<<"Sorted array is:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
				
		