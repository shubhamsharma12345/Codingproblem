#include<bits/stdc++.h>
using namespace std;

class StackUsingArray
{
   int *data;
   int nextIndex;
   int capacity;
   
   public:
   
   StackUsingArray(int totalSize)
   {
   	 data=new int[totalSize];
	 nextIndex=0; 
	 capacity=totalSize;
	}
	
	//return the number of elements present in the stack
	int size()
	{
		return nextIndex;
	}
	
	//check the stack is empty or not
	bool isEmpty()
	{
	 if(nextIndex==0)
	 {
	 	return true;
		 }	else
		 {
		 	return false;
		 }
	}	
	
	int push(int element)
	{
		if(nextIndex==capacity)
		{
			cout<<"Stack is full"<<endl;
		
		}else
		{
		
			data[nextIndex]=element;
		    nextIndex++;
			
		}
	}
	//delete element
	int pop()
	{
		if(isEmpty())
		{
			cout<<"Stack is empty"<<endl;
			return INT_MIN;
		}
		nextIndex--;
	return data[nextIndex];
	}
	
	int top()
	{
		return data[nextIndex-1];
	}
};


int main()
{
	StackUsingArray s(5);
	s.push(10);
	s.push(20);
	s.push(20);
	s.push(40);
	
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.isEmpty()<<endl;
}
