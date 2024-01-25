#include<iostream>
using namespace std;

// Binary Search

int binary_search(int arr[],int n,int target)
{
	int start,mid,end;
	
	start = 0;
	end = n-1;
	
	while(start <= end)
	{
		mid = (start+end)/2;	
		if(arr[mid] == target)
		{
			return mid;
		}
		else if(arr[mid]>target)
		{
			end = mid-1;
		}
		else if(arr[mid]<target)	
		{
			start =mid+1;
		}
	}
	return -1;
}
int main()
{
	
	int size,target;
	cout<<"Enter the size for the array: ";
	cin>>size;
	int arr[size];
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the "<< i+1 <<" element: ";
		cin>>arr[i];
	}
	
	cout<<"Enter the element to be found: ";
	cin>>target;
	
	int target_index = binary_search(arr,size,target);
	
	if(target_index = -1)
	{
		cout<<"Element Not Found!!";
	}
	else
	{
		cout<<"Element Found at index : "<<target_index;
	}
	
}