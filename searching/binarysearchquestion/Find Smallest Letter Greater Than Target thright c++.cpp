#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int n,int x, int tog)
{
	int low=0;
	int high=n-1;
	int ans=-1;
	while(low<=high)
	{
		int mid=(low+mid)/2;
		if(a[mid]<x)
		{
			low=mid+1;
		}
		else if(a[mid]>x)
		{
			high=mid-1;
		}else
		{
			ans=mid;
			if(tog==-1) high=mid+tog;
			else low=mid+tog;
		}
	}
	return ans;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,n;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int idx1=solve(a,n,x,-1);
		int idx2=solve(a,n,x,1);
		if(idx1==-1)
		{
			cout<<"-1"<<endl;
			
		}else{
			cout<<idx1<<" "<<idx2<<endl;
		}
		return 0;
	}
}
