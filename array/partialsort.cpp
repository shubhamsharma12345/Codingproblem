#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> V = { 11, 65, 193, 36, 209, 664, 32 };
    partial_sort(V.begin(), V.begin() + 3, V.end(), greater<int>());
 
    cout << "first = " << V[0] << "\n";
    cout << "second = " << V[1] << "\n";
    cout << "third = " << V[2] << "\n";
    return 0;
}
