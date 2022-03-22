#include<bits/stdc++.h>
using namespace std;

int second_Largest(int num[] , int size)
{
	int first, sec;
	if(size<2)
	{
		cout<<"invalid array";
		return 0;
	}
	first=sec=INT_MIN;
	for(int i=0;i<size;i++)
	{
		if(num[i]>first)
		{
			sec=first;
			first=num[i];
		}
		else if(num[i]>sec)
		{
			sec=num[i];
		}
	}
	if(sec==INT_MIN)
	{
		cout<<"No second largest number";
	}
	else {
		cout<<"\nThe second largest number is: "<< sec;
	}
}

int main()
{
	int nums[5];
	cout<<"Enter the 5 numbers"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>nums[i];
	}
	cout<<"origianl array";
	for(int i=0;i<5;i++)
	{
		cout<<nums[i]<<" ";
	}
	
	int size=sizeof(nums)/sizeof(nums[0]);
	second_Largest(nums, size);
	return 0;
	
}
