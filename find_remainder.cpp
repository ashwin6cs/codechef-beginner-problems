#include <iostream>
using namespace std;
int main()
{   int i, j, a, b;
    cin >> i;
    for(j=0;j<i;j++){
        cin >> a >> b;
        cout << a%b << endl;
    }
}