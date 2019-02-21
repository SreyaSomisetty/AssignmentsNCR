#include<iostream>
using namespace std;
void quicksort(int a[],int low,int high)
	
	{
		int pivot=a[low];
		int i=low+1;
		int j=high;
		if(low<high)
		{
			while(1)
			{
		      while(i<=high && a[i]<pivot)
		      i++;
	          while(a[j]>pivot)
		      j--;
	          if(i<j)
	          {
		       int temp=a[i];
		       a[i]=a[j];
			   a[j]=temp;
			  }
			  else 
				  break;
			}
		 int k=a[low];
		 a[low]=a[j];
		 a[j]=k;
		 quicksort(a,low,j-1);
		 quicksort(a,j+1,high);
		
	}
	}

	int main()
	{
	int a[20],i,j,n;
	cout<<"Enter number of elements:";
	cin>>n;
	cout<<"Enter array elements:";
	for(i=0;i<n;i++)
		cin>>a[i];
	quicksort(a,0,n-1);
	cout<<"Sorted elements are:";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
	}
