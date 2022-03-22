#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LastDigit(int a[], int n, int x, int i)
{
	//base case
	if(i==-1)
	{
		return -1;
	}
	if(a[i]==x)
	{
		return i;
	}
	return LastDigit(a,n,x,i-1);
}

int LastDigit2(int a[], int n, int x)
{
	//base case
	if(n==0)
	{
		return -1;
	}
	if(a[n-1]==x)
	{
		return n-1;
	}
	return LastDigit2(a,n-1,x);
}

int main()
{
	int a[]={2,4,5,6,7,4,4,3,3,2};
	cout<<LastDigit(a,10,4,9)<<endl;
    cout<<LastDigit2(a,10,4)<<endl;
    return 0;
}
