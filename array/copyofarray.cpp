#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5];
	cout<<"Enter the numbers"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<" "<<a[i];
	}
	for(int i=5;i>=0;i--)
	{
		b[i]=a[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<" "<<b[i];
	}
}
