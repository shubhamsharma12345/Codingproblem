#include<iostream>
#include<bits/stdc++.h>
using namespace std;

segregate0and1(int p2[] , int size)
{
	int left=0 ,right=size-1;
	
	while(left<right)
	{
		while(p2[left]==0 && right>left)
		 left++;
		 
		 while(p2[right]==1 &&  right >left)
		 right--;
		 
		 if(right>left)
		  {
		  	p2[left]=0;
		  	p2[right]=1;
		  	left++;
		  	right--;
		  }
	}
}


int main()
{
	 int i;
	int *p=new int[20];
	int n;
	cin>>n;
	cout<<"Enter the 0 and 1 array for sorting"<<endl;
	int *p2=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>p2[i];
	}
	
	segregate0and1(p2 , n);
	
	cout<<" After segregation ";
	for(int i=0;i<n;i++)
	   cout<<p2[i]<<" ";
	return 0;
}
