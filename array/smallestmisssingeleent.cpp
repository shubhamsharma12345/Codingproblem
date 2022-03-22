#include<bits/stdc++.h>
using namespace std;

//Method 1

//int search(int ar[],int size)
//{
//	int a=0,b=size-1;
//	int mid;
//	while((b-a)>1)
//	{
//		mid=(a+b)/2;
//		if((ar[a]-a)!=(ar[mid]-mid))
//		 b=mid;
//		else if((ar[b]-b) !=(ar[mid]-mid))
//		  a=mid;
//	}
//	return (ar[a]+1);
//}
//
//
//int main()
//{
//	int ar[]={1,2,3,4,5,6,8};
//	int size=sizeof(ar)/sizeof(ar[0]);
//	cout<<"Missing Number:"<<search(ar,size);
//}


//Method 2
//int smalest_missing_num(int nums[], int start_pos, int end_pos)
//{
//    if (start_pos  > end_pos)
//        return end_pos + 1;
// 
//    if (start_pos != nums[start_pos])
//        return start_pos;
// 
//    int mid = (start_pos + end_pos) / 2;
// 
//    if (nums[mid] == mid)
//        return smalest_missing_num(nums, mid + 1, end_pos);
// 
//    return smalest_missing_num(nums, start_pos, mid);
//}
// 
//int main()
//{
//    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
//    int result;
//	int n = sizeof(nums)/sizeof(nums[0]);
//	cout << "Original array: ";
//    for (int i=0; i < n; i++) 
//    cout << nums[i] <<" ";
//    result = smalest_missing_num(nums, 0, n-1);
//    cout << "\nSmallest missing element is " << result;
//  return 0;     
//}


//Method 3 SUM FORMULA

//int getMissingNo(int a[],int n)
//{
//	int i,total=1;
//	for(i=2;i<=(n+1);i++)
//	{
//		total=total+i;
//		total=total-a[i-2];
//	}
//	return total;
//	}
//
//
//int main()
//{
//	int arr[]={1,2,3,5};
//	
//	cout<<" "<<getMissingNo(arr,sizeof(arr)/sizeof(arr[0]));
//	
//	return 0;
//}

//Method 4 X0R

int getMissingNo(int a[],int n)
{
	int x1=a[0];
	int x2=1;
	for(int i=1;i<n;i++)
	x1=x1^a[i];
	
	for(int i=2;i<=n+1;i++)
	x2=x2^i;
	return (x1^x2);
}

int main()
{
	int arr[]={1,2,4,5};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	int miss=getMissingNo(arr,n);
	cout<<miss;
}





