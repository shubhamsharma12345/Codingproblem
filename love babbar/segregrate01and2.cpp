#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int segregrate01and2(int p2[] , int size)
{
	
	int count1=0, count2=0;
	
	for(int i=0;i<size;i++)
	{
		if(p2[i]==0)
		 count1++;
		
	}
	for(int i=0;i<size;i++)
	{
	    if(p2[i]==1)
		  count2++;
	}
	cout<<count1<<endl;
	cout<<count2<<endl;
	int c2=count2+count1;
	for(int i=0;i<count1;i++)
	    p2[i]=0;
    for(int i=count1;i<c2;i++)
	    p2[i]=1;
	for(int i=c2
	;i<size;i++)
	    p2[i]=2;
	
}
int printarray(int p2[] , int size)
{
	cout<<"the segregate array is"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<p2[i]<<" ";
	}
 } 
 
 
int main()
{
	int *p1=new int[10];
	int n;
	cin>>n;
	cout<<"Enter the number of 0 1 2 in array"<<endl;
	int *p2=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>p2[i];
	}
	
	segregrate01and2(p2 , n);
	printarray(p2,n);
	return 0;
	
}
