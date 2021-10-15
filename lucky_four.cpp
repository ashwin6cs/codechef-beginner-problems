#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str;
    int a;
    char ch = '4';
    cin >> a;
    for(int i = 0; i<a;i++){
        cin >> str;
        cout << std::count(str.begin(), str.end(), ch) << endl;
    }
}