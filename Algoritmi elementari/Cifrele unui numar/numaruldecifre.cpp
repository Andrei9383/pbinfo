#include <iostream>

using namespace std;

int main(){
    int64_t n, ans = 0; cin >> n;
    if(n == 0) ans++;
    while(n > 0){
        ans++;
        n /= 10;
    }
    cout << ans;
    return 0;
}