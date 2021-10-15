#include <iostream>
using namespace std;

int main()
{
    int a, b, c, n=0;
    cin >> a >> b;
    for(int i = 0; i<a; i++){
        cin >> c;
        if(c%b==0){
          n = n+1;
        }
    }
    cout << n << endl;
    return 0;
}