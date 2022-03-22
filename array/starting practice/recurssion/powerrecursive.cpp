#include<iostream>
using namespace std;
int power(int a, int n)
{
	if(n==0)
	{
		return 1;
	}
	int f1= power(a,n-1);
	int f2=a*f1;
	return f2;
}

int main()
{
	int a, n;
	cin>>a>>n;
	power(a,n);
	cou
	return 0;
}
