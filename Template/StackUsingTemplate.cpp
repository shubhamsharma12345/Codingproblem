#include<bits/stdc++.h>
using namespace std;
template <typename T>

class StackUsingArray
{
   T *data;
   int nextIndex;
   int capacity;
   
   public:
   
   StackUsingArray()
   {
   	 data=new T[4];
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
	
	T push(T element)
	{
		if(nextIndex==capacity)
		{
//			cout<<"Stack is full"<<endl;

            T *newData= new T[2*capacity];
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
	T pop()
	{
		if(isEmpty())
		{
			cout<<"Stack is empty"<<endl;
			return 0;
		}
		nextIndex--;
	return data[nextIndex];
	}
	
	T top()
	{
		if(isEmpty())
		{
			cout<<"Stack is empty "<<endl;
			return 0;
		}
		return data[nextIndex-1];
	}
};


int main()
{
	StackUsingArray<char> s;
	s.push(101);
	s.push(108);
	s.push(106);
	s.push(105);
	s.push(103);
	s.push(102);
	
	
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.isEmpty()<<endl;
}
