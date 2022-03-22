#include<bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) {
int start = 0;
int end = letters.size() - 1;

while (start <= end)
{
	
     int mid= start + (end - start)/2;
     if(target == letters[mid])
     {
     	return letters[mid +1];
	 }
         if (target < letters[mid])
        
              end = mid - 1;
       else 
            start = mid + 1;
   
}
return letters[start % letters.size()];
}

int main()
{
	vector<char> letters{'c','f','j','h','i','g'};
	char K='j';
	char result=nextGreatestLetter(letters, K);
	cout<<result<<endl;
	return 0;
}
