// A quickly written program for reversing a string
// using reverse()
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
	string str;
	for(int i=0; i<a;i++)
    {
        cin >> str;
        reverse(str.begin(), str.end());
        cout << stoi(str) << endl;
    }
	return 0;
}
