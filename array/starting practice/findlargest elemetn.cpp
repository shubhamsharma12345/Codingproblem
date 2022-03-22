#include<bits/stdc++.h>
using namespace std;

//int find_Largest(int n[], int size)
//{
//	int max=n[0];
//	for(int i=1;i<size;i++)
//	
//			if(max<n[i])
//			
//				max=n[i];
//	return max;
//}

int find_Largest(int n[], int size)
{
	return *max_element(n, n+size);
}

int main()
{
	int n[]={5,4,9,12,8};
	
	int size = sizeof(n)/sizeof(n[0]);
	cout<<"Original array"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<n[i]<<" ";
	}
	cout<<"Largest element of the arryay is "<<endl<<find_Largest(n, size);
	return 0;
}
