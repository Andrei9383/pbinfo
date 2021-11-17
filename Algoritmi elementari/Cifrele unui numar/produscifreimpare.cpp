#include <iostream>

using namespace std;

int main(){
    int64_t n, p = 1; cin >> n;
    bool a = false;
    while(n > 0){
        if((n % 10) % 2 != 0){
            p *= n % 10;
            a = true;
        }
        n /= 10;
    }
    if(a) cout << p;
    else cout << -1;
    return 0;
}