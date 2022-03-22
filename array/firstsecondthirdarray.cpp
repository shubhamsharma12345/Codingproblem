#include<iostream>
using namespace std;
int main()
{
	int num[7],fir=0,sec=0,thi=0;
	cout<<"Enter 7 numbers "<<endl;
	for(int i=0;i<7;i++)
	{
		cin>>num[i];
		if(num[i]>fir)
		{
			thi=sec;
			sec=fir;
			fir=num[i];
		}
		else if(num[i]>sec)
		{
			thi=sec;
			sec=num[i];
		}
		else if(num[i]>thi)
		{
			thi=num[i];
		}
	}
	cout<<" "<<fir<<" "<<" "<<sec<<" "<<thi<<endl;
}
