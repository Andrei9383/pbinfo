#include <iostream>

using namespace std;

int main(){
    int n, aux, s = 0, p = 0, k = 0; cin >> n;
    while(n != 0){
        s = s + n % 10;
        n /= 10;
    }
    aux=s;
    while(s > 9){
        cout << "9";
        k++;
        s = s - 9;
    }
    cout<<s;
    while(p < aux - k - 1){
        cout << "0";
        p++;
    }
    return 0;
}