#include<iostream>
using namespace std;

int liniarSearch(int a[], int size,int x )
{
	for(int i=0;i<size;i++)
	{
		if(a[i]==x)
		  return i;
	}
	return -1;
}

int main()
{
	int a[]={1,2,3,4,5};
	int result=liniarSearch(a,4,3);
    (result==-1)?
	    cout<<"Element is not found":cout<<"Element is found at index "<<result;
	return 0;
}
