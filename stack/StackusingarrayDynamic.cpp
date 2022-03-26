#include<bits/stdc++.h>
using namespace std;

class StackUsingArray
{
   int *data;
   int nextIndex;
   int capacity;
   
   public:
   
   StackUsingArray()
   {
   	 data=new int[4];
	 nextIndex=0; 
	 capacity=4;
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
//			cout<<"Stack is full"<<endl;

            int *newData= new int[2*capacity];
			for(int i=0;i<capacity;i++)
			{
				newData[i]=data[i];
			}
			capacity *=2;
			delete [] data;
			data=newData;
			
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
		if(isEmpty())
		{
			cout<<"Stack is empty "<<endl;
			return INT_MIN;
		}
		return data[nextIndex-1];
	}
};


int main()
{
	StackUsingArray s;
	s.push(10);
	s.push(20);
	s.push(20);
	s.push(40);
	s.push(20);
	s.push(20);
	s.push(40);
	s.push(10);
	s.push(20);
	s.push(20);
	s.push(40);
	s.push(20);
	s.push(20);
	s.push(40);
	
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.isEmpty()<<endl;
}
