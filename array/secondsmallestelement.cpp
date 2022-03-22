#include<iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
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

int main()
{
	int a[5];
	cout<<"Enter the numbers"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	insertion_sort(a,5);
	cout<<endl<<" "<<a[4];
	return 0;
}
