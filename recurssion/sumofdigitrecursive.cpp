#include<iostream>
using namespace std;

int sum(int n)
{
	//base case
	if(n==0)
	{
		return 0;
	}
	//recursive
	int smallAns=sum(n/10);
	
	//calculation
	int last_digit=n%10;
	return last_digit+smallAns;
}


int main()
{
	int n,m;
	cout<<"Ente the digit"<<endl;
	cin>>m;
	cout<<sum(m);
    return 0;
}
