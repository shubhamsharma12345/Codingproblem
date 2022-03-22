#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void segregate01and2(int a[], int size)
{
	int low=0;
	int high=size-1;
	int mid=0;
	// Iterate till all the elements 
    // are sorted
	while(high>=mid)
	{
		switch(a[mid])
		{
			// If the element is 0 
			case 0:
				swap(a[low++], a[mid++]);
				break;
				
			// If the element is 1 .
			case 1:
				mid++;
				break;
			// If the element is 2 
			case 2:
					swap(a[mid], a[high--]);
					break;
		}
	}
}

void printarray(int a[] , int size)
{
	for(int i=0;i<size;i++)
	cout<<a[i]<<" ";
}
int main()
{
	int arr[]={0,1,0,1,0,2,1,2,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	segregate01and2(arr, n);
	cout<<"array after segregation";
	printarray(arr,n);
	return 0;
}
