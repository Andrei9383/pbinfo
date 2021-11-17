#include <iostream>

using namespace std;

int main(){
    int64_t n, a, ans = 0; cin >> n;
    if(n == 0){
        cout << 1;
        return 0;
    }
    a = n % 10;
    while(n > 0){
        if(n % 10 == a) ans++;
        n /= 10;
    }
    cout << ans;
    return 0;
}