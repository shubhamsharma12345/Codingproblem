#include<bits/stdc++.h>
using namespace std;
int numberOfDigits(int n)
{
	int count=0;
	while(n>0)
	{
		n/=10;
		count++;
	}
	return count;
}

int digits2(int num)
{
	if(num<0){
		num=num* -1;
		
	}
    return (int)(log10(num))+1;
}

int findNumbers(vector <int> &a)
{
	int result=0;
	for(int &i : a)
	
		if(digits2(i) %2==0)
	     	result++;

	return result;
}

int main()
{
	vector<int> a= {123,32,3234,121,10};
	cout<<findNumbers(a)<<endl;
	int x=log10(123);
	cout<<log10(123)<<endl;
	cout<< x;
 
	return 0;
}

