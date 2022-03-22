#include<iostream>
using namespace std;
int main()
{
	int n[5],sum=0,pro=1;
	cout<<"enter the numbers"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>n[i];
	}
	
	for(int i=0;i<5;i++)
	{
		sum=sum+n[i];
		pro=pro*n[i];
		
		
	}
	cout<<"Sum of 5 mnumbers is"<<sum<<endl;
	cout<<"Pro of 5 mnumbers is"<<pro<<endl;
	
	
}
