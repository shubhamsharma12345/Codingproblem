#include<iostream>
using namespace std;
int main()
{
	int n[6],x;
	cout<<"Enter 6 numbers"<<endl;
	for(int i=0;i<6;i++)
	{
		cin>>n[i];
	}
	cout<<"find number from the array"<<endl;
	cin>>x;
	int found=0;
	
	for(int i=0;i<6;i++)
	{
		if(n[i]==x)
		{
		 
		  found=1;
		  break;
	}
		
		   
	}
	if(found)
	   cout<<""<<x<<" number is present in array"<<endl;
	else
	    cout<<""<<x<<" number is not present in array"<<endl;
	 
}
