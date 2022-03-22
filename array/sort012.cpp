#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Method1

//void sort012(int ar[], int n)
//{
//	int ct1=0,ct2=0,ct3=0;
//	for(int i=0;i<n;i++)
//	{
//		if(ar[i]==0)
//		  ct1++;
//		if(ar[i]==1)
//		  ct2++;
//		if(ar[i]==2)
//		 ct3++;
//	}
//	for(int i=0;i<ct1;i++)
//	 ar[i]=0;
//	 
//	for(int i=ct1+1;i<=ct2;i++)
//	
//		ar[i]=1;
//	for(int i=ct2+1;i<=ct3;i++)
//	
//		ar[i]=2;
//	
//}
//void print(int arr[], int n)
//{
//    cout << "Array after segregation is ";
// 
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//}

void sort012(int ar[],int n)
{
	int l=0,m=0,h=n-1;
	
	while(m<=h)
	{
		int x=ar[m];
		if(x==0)
		{
			swap(ar[l],ar[m]);
			l++;
			m++;
		}
		else if(x==1){
			m++;
		}
		else{
			swap(ar[h],ar[m]);
			h--;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<" "<<ar[i];
	}
	
}


int main()
{
	int ar[]={0,0,1,1,2,2};
	int size=sizeof(ar)/sizeof(ar[0]);
	sort012(ar,size);
//	print(ar, size);
	return 0;
}
