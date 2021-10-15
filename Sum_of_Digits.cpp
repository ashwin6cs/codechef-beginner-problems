#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,i,j,n=0;
    string s;
    cin >> a;
    for(i = 0;i<a;i++)
    {
        cin >> s;
        for(j=0;j<s.length();j++){
            n = n + stoi(s[j]);
        }
        cout << n << endl;
        
    }
}