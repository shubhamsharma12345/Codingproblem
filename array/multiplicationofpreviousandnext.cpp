#include<bits/stdc++.h>
using namespace std;

void replace_elements(int nums[],int n)
{
	if(n<=1)
	return;
	
	int previos_element=nums[0];
	nums[0]=nums[0]*nums[1];
	for(int i=1;i<n-1;i++)
	{
		int curr=nums[i];
		
		nums[i]=previos_element*nums[i+1];
		
		previos_element=curr;
		
	}
	nums[n-1]=previos_element*nums[n-1];
}

int main()
{
	int nums[]={2,3,4,5,6};
	int n=sizeof(nums)/sizeof(nums[0]);
	cout<<"Original array"<<endl;
	for(int i=0;i<n;i++)
	cout<<nums[i]<<" ";
	replace_elements(nums,n);
	cout << "\nNew array elements: ";
    for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
  return 0;  
}
