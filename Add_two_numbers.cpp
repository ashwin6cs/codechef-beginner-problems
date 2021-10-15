#include <iostream>
using namespace std;

int main() {
    int a,i,b,c,j, *sum;
    cin >> a;
    for(i=0; i<a;i++){
        cin >> b >> c;
        sum[i] = b+c;
    }
    for(j=0; j<a;j++){
        cout << sum[j] << endl;
    }

    return 0;
}