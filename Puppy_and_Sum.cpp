#include <iostream>
using namespace std;

int main(){
    int a, b, c, k, sum = 0;
    cin >> a;
    for(int i = 0; i<a;i++){
        cin >> b >> c;
        for(int j = 0; j<b;j++){
            sum = 0;
            for(int k = 1; k<=c;k++){
                sum += k;
            }
            c = sum;
        }
        cout << sum << endl;
    }
}
