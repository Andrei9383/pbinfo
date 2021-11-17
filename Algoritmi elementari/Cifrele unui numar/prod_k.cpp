#include <iostream>

using namespace std;

int main(){
    int64_t n, k, p = 1; cin >> n >> k;
    bool a = false;
    while(n > 0){
        if(n % 10 != k) {p *= n % 10; a = true;}
        n /= 10;
    }
    if(a) cout << p;
    else cout << 0;
    return 0;
}