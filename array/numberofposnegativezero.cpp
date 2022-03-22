#include<iostream>
using namespace std;
int main()
{
	int n[10];
	int pos=0;
	int neg=0,zero=0,even=0,odd=0;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter the numbers"<<endl;
		cin>>n[i];
		if(n[i]>0)
		  pos++;
		else if(n[i]<0)
		  neg++;
		else if(n[i]==0)
		  zero++;
		else if(n[i]%2==0)
		  even++;
		else 
		  odd++;
	}
	cout<<"Positive "<<pos<<endl<<"negative"<<neg<<endl<<"zero"<<zero<<endl<<"Odd"<<odd<<endl<<"Even"<<even<<endl;
}
