#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//int printAllposition(int a[], int n, int x)
//{
//	int i=0;
//	for(int i=0;i<n;i++)
//	{
//		if(a[i]==x)
//		cout<<i<<endl;
//	}
//    return i ;
//}

void printAllposition2(int a[], int n, int x,int i)
{
	if(i==n)
	{
		return;
	}
	if(a[i]==x)
	{
	
	 cout<<i<<" ";
}
 printAllposition2(a,n,x,i+1);
}

int main()
{
	int a[]={2,4,5,6,7,4,4,3,3,2};
//    cout<<printAllposition(a,10,4)<<endl;
    printAllposition2(a,10,4,0);
    return 0;
}
