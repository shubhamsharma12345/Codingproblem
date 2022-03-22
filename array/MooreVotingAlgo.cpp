#include<iostream>
using namespace std;

int findCandidate(int a[] , int size)
{
	int ans_index=0,count=1;
	for(int i=1;i<size;i++)
	{
		if(a[ans_index]==a[i])
		    count++;
		else
		    count--;
		if(count==0){
			ans_index=i;
			count=1;
		}
	}
	return a[ans_index];
}
bool isMajority(int a[],int size, int cand)
{
	int count=0;
	for(int i=0;i<size;i++)
	  if(a[i]==cand)
	    count++;
	if(count>size/2)
	   return 1;
	else 
	   return 0;
}


void priorityMajority(int a[],int size)
{
	int cand=findCandidate(a,size);
	
	if(isMajority(a,size,cand))
	   cout<<" "<<cand<<" ";
	else
	   cout<<"No majority element";
}

int main()
{
	int a[]={2,3,4,5,2,2,3,3,3};
	int size=(sizeof(a))/sizeof(a[0]);
	
	priorityMajority(a,size);
}
