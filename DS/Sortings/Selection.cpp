#include<iostream>
using namespace std;
void main()
{
	int i,j,n,loc,temp;
cout<<"Enter no of elements:";
cin>>n;
int a[15];
cout<<"Enter array elements:";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)

{
	loc=i;
	j=i+1;
	while(j<=n-1)
	{
		if(a[j]<a[loc])
		{
			loc=j;
		  
		}
		j++;
	}
	
	temp=a[i];
	a[i]=a[loc];
	a[loc]=temp;
}
cout<<"Sorted elements are:";
for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}
