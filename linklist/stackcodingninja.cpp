// first program to design stack in array
//beacuse i use int_min i have to include file
#include<climits>
#include<iostream>
using namespace std;
class StackUsingArray{
	
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
	  //return the number of elements presents in my stack
	  
	  int size()
	  {
	  	return nextIndex;
	  }
	  
	  //return my stack is empty or not
	   
	bool isEmpty()
	{
		if(nextIndex==0)
		{
			//cout<<"Stack is empty"<<endl;
			return true;
		}
		else{
			return false;
		}
	}
	// insert element
	
	void push(int element)
	{
		if(nextIndex==capacity)
		{
		cout<<"Stack full"<<endl;
		return;
	}
		data[nextIndex]=element;
		nextIndex++; 
	}
	
	//to delete the element
	
	int pop()
	{
		if(isEmpty()){
			cout<<"Stack is empty"<<endl;
			return INT_MIN;
		}
     	nextIndex--;
	    return data[nextIndex];
	}
	//topmost elements
	int top()
	{
		return data[nextIndex - 1];
	}
	
};

//
#include<iostream>
using namespace std;
#include "StackUsingArray1.cpp";

int main()
{
	StackUsingArray s(4);
	
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.isEmpty()<<endl;
	
}

//Stack using dynamic array 

//beacuse i use int_min i have to include file
#include<climits>
#include<iostream>
using namespace std;
class StackUsingArray{
	
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
	  //return the number of elements presents in my stack
	  
	  int size()
	  {
	  	return nextIndex;
	  }
	  
	  //return my stack is empty or not
	   
	bool isEmpty()
	{
		if(nextIndex==0)
		{
			//cout<<"Stack is empty"<<endl;
			return true;
		}
		else{
			return false;
		}
	}
	// insert element
	
	void push(int element)
	{
		if(nextIndex==capacity)
		{
			int *newData= new int[2*capacity];
			for(int i=0;i<capacity;i++)
			{
				newData[i]=data[i];
			}
			capacity=capacity*2;
			delete [] data;
			data=newData;
//		cout<<"Stack full"<<endl;
//		return;
	}
		data[nextIndex]=element;
		nextIndex++; 
	}
	
	//to delete the element
	
	int pop()
	{
		if(isEmpty()){
			cout<<"Stack is empty"<<endl;
			return INT_MIN;
		}
     	nextIndex--;
	    return data[nextIndex];
	}
	//topmost elements
	int top()
	{
		return data[nextIndex - 1];
	}
	
};

// Main program for dynamic array
#include<iostream>
using namespace std;
#include "StackUsingDynamicarray2.cpp";

int main()
{
	StackUsingArray s;
	
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	cout<<s.top()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.isEmpty()<<endl;
	
}




