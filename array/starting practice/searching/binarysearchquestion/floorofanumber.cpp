#include<bits/stdc++.h>
using namespace std;

int Floor(int a[],int size,int target)
{
	if(target>size-1)
	{
		return -1;
	}
	int start=0,end=size-1,posi=-1;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(target<a[mid])
		{
			end=mid-1;
		}
		else if(target>a[mid])
		{
			start=mid+1;
		}
		else{
			return mid;
		}
	}
	return end;
}

int main()
{
	int n[]={2,3,5,9,14,16,18};
	int result=Floor(n,7,15);
	cout<<result<<endl;
	return 0;
}
