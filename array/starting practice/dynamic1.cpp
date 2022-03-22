#include<bits/stdc++.h>
using namespace std;

int main()
{
	int *p=new int[10];
	int n;
	cout<<"Enter the number of elements";
	cin>>n;
	
	int *p2=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>p2[i];
	}
	int max=-1;
	
	for(int i=0;i<n;i++)
	{
		if(max<p2[i])
		{
			max=p2[i];
		}
	}
	cout<<max<<endl;
	delete [] p;
	delete [] p2;
	
}
