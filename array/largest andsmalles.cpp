#include<iostream>
using namespace std;

int main()

{
	int n[10];
	cout<<"enter the numbers"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>n[i];
	}
	for(int i=0;i<10;i++)
	{
		if(n[0]<n[i])
		{
			n[0]=n[i];
		}
	}
	cout<<"Largest element is "<<n[0];
	for(int i=0;i<10;i++)
	{
		if(n[0]>n[i])
		{
			n[0]=n[i];
		}
	}
	cout<<"Smallest element is "<<n[0];
	
}
