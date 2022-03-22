#include<iostream>
#include<bits/stdc++.h>
using namespace std;

double GSum(int n)
{
	//base case
	if(n==0)
	{
		return 1;
	}
	//recursive
	double smallAns=GSum(n-1);
	
	//calculation

	return smallAns+1.0/pow(2,n);
}


int main()
{
	int n;
	cout<<"Ente the digit"<<endl;
	cin>>n;
	cout<<GSum(n);
    return 0;
}
