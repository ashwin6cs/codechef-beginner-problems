#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin >> a;
    for(int b = 0;b<a;b++){
        cin >> c >> d >> e;
        if(c+d+e == 180){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}