//program to reverse an array or string

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverseArray(int arr[], int start , int end)
{
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

int printArray(int arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
		
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int n =sizeof(arr)/sizeof(arr[0]);
	
	printArray(arr,n);
	
	reverseArray(arr,0,n-1);
	
	cout<<"reverse array is"<<endl;
	
	printArray(arr,n);
	return 0;
	
}

//Dynamic largest element in array in c++

#include<iostream>
using namespace std;
int main()
{
	int *p= new int[50];
	int n,Max;
	cout<<"How many array you wants:"<<endl;
	cin>>n;
	
	int *p2= new int[n];
	cout<<"Enter the "<<n<<"elements :"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>p2[i];
	}
	Max=p2[0];
	for(int i=1;i<n;i++)

	if(Max<p2[i])
	{
		Max=p2[i];
	}
   cout<<"Mximum eleemts in these array is "<<Max;
   
   delete [] p;
}
// largest element in array through stl function in c++
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Largest(int arr[], int n)
{
	return *max_element(arr, arr+n);
}

int main()
{
	int arr[]={10,23,444,90,90909};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Largest element in given array is "<<endl<<Largest(arr, n);
	return 0;
}

//K’th Smallest/Largest Element in Unsorted Array | Set 1
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
 {
 	int t;
 	cin>>t;
 	
 	while(t--)
 	{
 		int n;
 		cin>>n;
 		
 		int a[n];
 		 for(int i=0;i<n;i++)
 		 {
 		 	cin>>a[i];
		  }
		  int k;
		  cin>>k;
		  
		  sort(a, a+n);
		  cout<<a[k-1]<<endl;
	 }
	 
 }

 //segregate o and 1 in an array

 #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int segregate0and1(int a[], int n)
{
	int count=0; //count the number of 0
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		 count++;
	}
	
	for(int i=0;i<count;i++)
	
		a[i]=0;
	
	
	for(int i=count;i<n;i++)
	  a[i]=1;
	
}

int print(int a[], int n)
{
	cout<<"Array after segregation is ";
	for(int i=0;i<n;i++)
	   cout<<a[i]<<" ";
}


int main()
{
	int a[]={0, 1, 0, 1, 0, 1 };
	int n=sizeof(a)/sizeof(a[0]);
	
	segregate0and1(a,n);
	
	 print(a,n);
	 return 0;
	
}

//segregate o and 1 in an array(second method)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

segregate0and1(int p2[] , int size)
{
	int left=0 ,right=size-1;
	
	while(left<right)
	{
		while(p2[left]==0 && right>left)
		 left++;
		 
		 while(p2[right]==1 &&  right >left)
		 right--;
		 
		 if(right>left)
		  {
		  	p2[left]=0;
		  	p2[right]=1;
		  	left++;
		  	right--;
		  }
	}
}


int main()
{
	 int i;
	int *p=new int[20];
	int n;
	cin>>n;
	cout<<"Enter the 0 and 1 array for sorting"<<endl;
	int *p2=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>p2[i];
	}
	
	segregate0and1(p2 , n);
	
	cout<<" After segregation ";
	for(int i=0;i<n;i++)
	   cout<<p2[i]<<" ";
	return 0;
}

// segregate o and 1 and 2 in an array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int segregrate01and2(int p2[] , int size)
{
	
	int count1=0, count2=0;
	
	for(int i=0;i<size;i++)
	{
		if(p2[i]==0)
		 count1++;
		
	}
	for(int i=0;i<size;i++)
	{
	    if(p2[i]==1)
		  count2++;
	}
	cout<<count1<<endl;
	cout<<count2<<endl;
	int c2=count2+count1;
	for(int i=0;i<count1;i++)
	    p2[i]=0;
    for(int i=count1;i<c2;i++)
	    p2[i]=1;
	for(int i=c2
	;i<size;i++)
	    p2[i]=2;
	
}
int printarray(int p2[] , int size)
{
	cout<<"the segregate array is"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<p2[i]<<" ";
	}
 } 
 
 
int main()
{
	int *p1=new int[10];
	int n;
	cin>>n;
	cout<<"Enter the number of 0 1 2 in array"<<endl;
	int *p2=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>p2[i];
	}
	
	segregrate01and2(p2 , n);
	printarray(p2,n);
	return 0;
	
}

//  segregate o and 1 and 2 in an array(second method)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int segregrate01and2(int p2[] , int size)
{
	int count1=0,count2=0,count3=0;
	
	for(int i=0;i<size;i++)
	{
		switch(p2[i])
		{
			case 0:
				count1++;
				break;
			case 1:
				count2++;
				break;
			case 2:
				count3++;
				break;
		}
	}
	int i=0;
	while(count1>0)
	{
		p2[i++]=0;
		count1--;
	}
	while(count2>0)
	{
		p2[i++]=1;
		count2--;
	}
	while(count3>0)
	{
		p2[i++]=2;
		count3--;
	}
}

	
	
int printarray(int p2[] , int size)
{
	cout<<"the segregate array is"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<p2[i]<<" ";
	}
 } 
 
 
int main()
{
	int *p1=new int[10];
	int n;
	cin>>n;
	cout<<"Enter the number of 0 1 2 in array"<<endl;
	int *p2=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>p2[i];
	}
	
	segregrate01and2(p2 , n);
	printarray(p2,n);
	return 0;
	
}