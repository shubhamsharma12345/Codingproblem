#include<bits/stdc++.h>
using namespace std;
int length(char s[])
{
	if(s[0]=='\0')
	{
		return 0;
	}
	int smalloutputlength=length(s+1);
	return 1+smalloutputlength;
}



int main()
{
//	string s1;
//	getline(cin,s1);
    char str[100];
    cin>>str;
	int l=length(str);
	cout<<l<<endl;
//	cout<<s1<<endl;;
//	1.	With for loop
//	int i;
//	 for (i = 0; s1[i]!='\0'; i++)
//        ;
//    cout << i << endl;
//   2. size method
//   cout<<s1.size()<<endl;
//   
//   
//   3.Lenght method
//   cout<<s1.length()<<endl;
//   
//   4.strlen(c_star()) method
//   cout<<strlen(s1.c_str())<<endl;
//  
//  5.using while loop
//  int i=0;
//  while(s1[i]!=0)
//  i++;
//  cout<<i<<endl;
//    return 0;

}

