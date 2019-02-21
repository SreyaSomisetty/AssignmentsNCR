#include<iostream>
using namespace std;
void mergesort(int [],int,int);
void merge(int[],int,int,int);
 void merge(int a[],int l1s,int l1e,int l2e)
{
	int l2s=l1e+1;
	int *l3,i,j,k;
	l3=new int[l2e-l1s+1];
	i=l1s;
	j=l2s;
	k=0;
	while(i<=l1e && j<=l2e)
	{
		if(a[i]>a[j])
		 l3[k++]=a[j++];
	    else
			l3[k++]=a[i++];
	}
	while(i<=l1e)
		l3[k++]=a[i++];
	while(j<=l2e)
		l3[k++]=a[j++];
	while(l2e>=l1s)
		a[l2e--]=l3[--k];
	delete l3;
}
 void mergesort(int a[],int low,int high)
{
	if(low<high)
	{
		int mid;
		mid=low+high/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
int main()
{
	int a[20],i,j,n,low=0;
	
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
	cin>>a[i];
   int high=n-1;
  mergesort(a,low,high);
	cout<<"Sorted elements are:";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}