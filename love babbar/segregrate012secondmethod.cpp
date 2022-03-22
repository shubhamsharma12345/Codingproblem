#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int segregrate01and2(int p2[] , int size)
{
	int count1=0,count2=0,count3=0;
	
	for(int i=0;i<size;i++)
	{
		switch(p2[i])
		{
			case 0:
				count1++;
				break;
			case 1:
				count2++;
				break;
			case 2:
				count3++;
				break;
		}
	}
	int i=0;
	while(count1>0)
	{
		p2[i++]=0;
		count1--;
	}
	while(count2>0)
	{
		p2[i++]=1;
		count2--;
	}
	while(count3>0)
	{
		p2[i++]=2;
		count3--;
	}
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
