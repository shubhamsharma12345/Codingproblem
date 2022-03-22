#include<iostream>
using namespace std;
int main()
{
	//static array
//	int n[10];
//	cout<<"Enter the 10 number"<<endl;
//	for(int i=0;i<10;i++)
//	{
//		cin>>n[i];
//	}
//	
//	cout<<"user 10 number "<<endl;
//	for(int i=0;i<10;i++)
//	{
//		cout<<" "<<n[i]<<" ";
//	}
    
    int x,n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter "<<n<<" number of elements"<<endl;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	cout<<"you entered"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<" "<<arr[i]<<" "<<endl;
		cout<<""<<&arr[i]<<""<<endl;
	}
	delete[]arr;
	cout<<&arr;
    
}

