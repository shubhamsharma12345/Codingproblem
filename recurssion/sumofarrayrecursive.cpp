#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Sumofarray(int a[], int n)

{
	//base case
	if(n==0)
	{
		return 0;
	}
	//recursive
	return a[0]+Sumofarray(a+1,n-1);


}
int Sumofarray3(int a[], int n)

{
	//base case
	if(n==0)
	{
		return 0;
	}
	//recursive
	return a[n-1]+Sumofarray3(a,n-1);


}
int sumofarray2(int a[], int n, int i)
{
	//base case
	if(i==n)
	{
		return 0;
	}
	return a[i]+sumofarray2(a,n,i+1);
}


int main()
{
	int a[]={12,12,12,12,12};
    int n=sizeof(a)/sizeof(a[0]);
   
    cout<<"sum of array "<<Sumofarray(a,n)<<endl;
    cout<<"sum of array2 " <<sumofarray2(a,n,0)<<endl;
    cout<<"sum of array3 "<<Sumofarray3(a,n)<<endl;
    return 0;
}
