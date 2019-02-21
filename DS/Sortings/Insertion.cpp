#include<iostream>
using namespace std;
void main()
{
	int i,j,n,temp;
cout<<"Enter no of elements:";
cin>>n;
int a[15];
cout<<"Enter array elements:";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<=n-1;i++)
{
j=i-1;
temp=a[i];
while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
cout<<"Sorted elements are:";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
}