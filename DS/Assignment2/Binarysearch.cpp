#include<iostream>
using namespace std;
void BinarySearch(int [],int,int);
void main()
{
	int a[10],size,search_ele;
	cout<<"Enter array size:";
	cin>>size;
	cout<<"Enter array elements:";
	for(int i=0;i<size;i++)
		cin>>a[i];
	cout<<"Enter an element to search:";
	cin>>search_ele;
	BinarySearch(a,size,search_ele);
}
void BinarySearch(int a[],int size,int ele)
{
	int low=0,high=size-1;
	int mid;
	while(low<high)
	{
		mid=(low+high)/2;
		if(ele< a[mid])
			high=mid-1;
		else if(ele> a[mid])
			low=mid+1;
		else
		{
		cout<<"Element found @loc:"<<mid;
		break;
		}
	}
	if(low>high)
		cout<<"Element not found";
}