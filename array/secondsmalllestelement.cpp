#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num[5],fir,sec;
	fir=sec=INT_MAX;
	cout<<"Enter 5 numbers "<<endl;
	
	for(int i=0;i<5;i++)
	{
		cin>>num[i];
		if(num[i]<fir)
		{
			sec=fir;
			fir=num[i];
		}
		else if(num[i]<sec)
		{
			sec=num[i];
		}
	}
	cout<<" "<<" "<<" "<<sec<<endl;
}
