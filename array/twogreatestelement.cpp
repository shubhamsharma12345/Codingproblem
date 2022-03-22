#include<bits/stdc++.h>
using namespace std;

//Second Method
//void find_Element(int n[],int size)
//{
//	sort(n,n+size);
//	for(int i=0;i<size-2;i++)
//	cout<<""<<n[i]<<" "<<endl;
//	
//}

int main()
{
	int n[8];
	cout<<"Elements which have at-least two greater elements:"<<endl;
	for(int i=0;i<8;i++)
	{
		cin>>n[i];
		
	}
	find_Element(n,8);
	//First method
//	for(int i=0;i<8;i++)
//	{
//		int count=0;
//		for(int j=0;j<8;j++)
//			if(n[j]>n[i])
//			count++;
//		
//		if(count>=2)
//		   cout<<" "<<n[i]<<endl;
//	}
	
}

