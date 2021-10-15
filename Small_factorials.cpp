#include <iostream>
using namespace std;

int main(){
    int a,b,n;
    cin >> a;
    for(int i=0;i<a;i++){
        n=1;
        cin >> b;
        while(b > 0){
            n = n * b;
            b = b-1;
        }
        cout << n << endl;
    }
}