#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a;
    for(int i=0; i<a;i++){
        cin >> b;
        if(b<10){
            cout << "Thanks for helping Chef!" << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
}