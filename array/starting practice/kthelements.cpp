#include<bits/stdc++.h>
using namespace std;

int kLargest(int nums[], int size, int k)
{
	sort(nums,size+nums,greater<int>());
	
	  for (int i = 0; i < k; i++)
        cout << nums[i] << " ";
}

int main()
{
	int nums[]= {12,22,44,77,41,8};
	int size=sizeof(nums)/sizeof(nums[0]);
	cout<<"orifinal array : " ;
	for(int i=0;i<size;i++)
	{
		cout<<nums[i]<<" ";
	}
	int k;
	cout<<"Enter the kth element"<<endl;
	cin>>k;
	kLargest(nums,size,k);
}
