#include<iostream>
using namespace std;

int main(){
    int i;
    cin >> i;
    if((i>=1) & (i<=50)){
        cout << "100" << endl;
    }
    else if((i>=51) & (i<=100)){
        cout << "50" << endl;
    }
    else{
        cout << "0" << endl;
    }
}

