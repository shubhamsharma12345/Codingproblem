#include<iostream>
using namespace std;
int Multiply(int a, int n)
{
	if(n==1)
	{
		return a;
	}
	int f1= Multiply(a,n-1);
	int f2=a+f1;
	return f2;
}

int main()
{
	int a, n;
	cin>>a>>n;
	int h1=Multiply(a,n);
	cout<<h1<<endl;
	return 0;
}
