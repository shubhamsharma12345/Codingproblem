#include<iostream>
using namespace std;

int f(int n)
{
	//base case
	if(n==0 or n==1)
	{
		return n;
	}
	//recursive call
	int f1=f(n-1);
	int f2=f(n-2);
	return f1+f2;
}

int main()
{
	int n;
//	cout<<"Enter the number for fibonacci series"<<endl;
	cin>>n;
	cout<<f(n)<<endl;
	return 0;
}
