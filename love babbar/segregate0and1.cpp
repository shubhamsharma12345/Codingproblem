#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int segregate0and1(int a[], int n)
{
	int count=0; //count the number of 0
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		 count++;
	}
	
	for(int i=0;i<count;i++)
	
		a[i]=0;
	
	
	for(int i=count;i<n;i++)
	  a[i]=1;
	
}

int print(int a[], int n)
{
	cout<<"Array after segregation is ";
	for(int i=0;i<n;i++)
	   cout<<a[i]<<" ";
}


int main()
{
	int a[]={0, 1, 0, 1, 0, 1 };
	int n=sizeof(a)/sizeof(a[0]);
	
	segregate0and1(a,n);
	
	 print(a,n);
	 return 0;
	
}
