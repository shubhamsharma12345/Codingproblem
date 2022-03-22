#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n[5];
  cout<<"enter the elements"<<endl;
  for(int i=0;i<5;i++)
  {
  	cin>>n[i];
   }
  int k;
  cout<<"Enter k th element"<<endl;
  cin>>k;
  sort(n,n+5, greater<int>());
  cout<<n[k-1]<<endl;
  	
}

