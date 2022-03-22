#include<bits/stdc++.h>
using namespace std;


void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}

void segregateEvenOdd(int num[],int n)
{
	int left_num=0,right_num=n-1;
	while(left_num<right_num)
	{
		while(num[left_num]%2==0 && left_num<right_num)
		  left_num++;
		while(num[right_num]%2==1 && left_num<right_num)
		 right_num--;
		 
		 if(left_num<right_num)
		 {
		 	swap(&num[left_num],&num[right_num]);
		 	left_num++;
		 	right_num--;
		 }
	}
}


int main()
{
	 int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(nums)/sizeof(nums[0]);
   	cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    segregateEvenOdd(nums, n);
 
    printf("\nArray after divided: ");
      for (int i=0; i < n; i++) 
      cout << nums[i] <<" ";
        return 0;
}
