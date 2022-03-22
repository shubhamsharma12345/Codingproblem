#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter number of elements you want to take in array: ";
  cin>>n;
  int a[n];
  cout<<"\nEnter array elements:\n";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(int i=0;i<n;i+=2)
  {
    if(i>0 && a[i-1]>a[i])
    {
      swap(a[i],a[i-1]);
    }
    if(i<=n-2 && a[i+1]>a[i])
    {
      swap(a[i],a[i+1]); 
    }
  }
  cout<<"\nWave-form:\n";
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  return 0;
}
