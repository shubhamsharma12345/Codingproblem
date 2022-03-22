#include<bits/stdc++.h>
using namespace std;

void printNGE(int n[], int size)
{
	int next,i,j;
	for(int i=0;i<size;i++)
	{
		next=-1;
		for(int j=1;j<size;j++)
		{
			if(n[j]>n[i])
			{
				next=n[j];
				break;
			}
		
		}
			cout<<" "<<n[i]<<" -- "<<next<<endl;
	}
}

int main()
{
	int n[]={2,7,9,1,3,10,6};
	int size=(sizeof(n))/sizeof(n[0]);
	
	printNGE(n,size);
	return 0;
}
