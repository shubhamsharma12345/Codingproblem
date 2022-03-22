#include<iostream>
using namespace std;

int count(int n)
{
	if(n==0)
	{
		return 0;
	}
	//recursive
	int smallAns=count(n/10);
	return smallAns+1;
}
int main()
{
	cout<<count(7820003);
	return 0;
}
