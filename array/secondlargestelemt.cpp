#include<iostream>
using namespace std;
int main()
{
	int num[7],fir=0,sec=0;
	cout<<"Enter 7 numbers "<<endl;
	for(int i=0;i<7;i++)
	{
		cin>>num[i];
		if(num[i]>fir)
		{
			sec=fir;
			fir=num[i];
		}
		else if(num[i]>sec)
		{
			sec=num[i];
		}
	}
	cout<<" "<<" "<<" "<<sec<<endl;
}
