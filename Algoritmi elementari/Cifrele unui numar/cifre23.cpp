#include <iostream>

using namespace std;

int main(){
    int64_t n, a = 0, b = 0; cin >> n;
    while(n > 0){
        if(n % 10 == 2) a++;
        else b++;
        n /= 10;
    }
    if(a == b){
        cout << "2 3";
        return 0;
    }
    a > b ? cout << 2 : cout << 3;
    return 0;
}