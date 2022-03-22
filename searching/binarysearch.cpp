#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int size,int target)
{
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
	return -1;
}

int main()
{
	int n[]={1,2,3,4,5,6,7,8,9,11,12};
	int result=binarySearch(n,11,6);
	cout<<result<<endl;
	return 0;
}
