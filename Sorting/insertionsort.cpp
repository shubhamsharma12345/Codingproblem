#include<iostream>
using namespace std;
int main()
{
	int a[5]={4,3,5,1,4};
	int i,ptr,temp;
	
	for(i=1;i<5;i++)
	{
		temp=a[i];
		ptr=i-1;
		while(temp<a[ptr] && ptr!=-1)
		{
			a[ptr+1]=a[ptr];
			ptr=ptr-1;
		}
		a[ptr+1]=temp;
	}
    for(int i =0;i<5;i++)
    {
    	cout<<" "<<a[i]<<" ";
	}
}
