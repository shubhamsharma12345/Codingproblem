//selectionsort

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5]={6,3,9,5,1};
	int i,j,cn,temp;
	for(int i=0;i<5;i++)
	{
		cn=i;
		for(j=i+1;j<5;j=j+1)
		{
			if(a[cn]>a[j])
			cn=j;
		}
		temp=a[cn];
		a[cn]=a[i];
		a[i]=temp;
	cout<<a[i]<<endl;
	}
}
