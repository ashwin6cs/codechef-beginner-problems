#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    cin >> a;
    for(int i = 0; i<a;i++){
        cin >> b;
        cout << round(sqrt(b));
    }
    return 0;
}