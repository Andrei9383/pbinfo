#include <iostream>

using namespace std;

int main(){
    int64_t n, ans = 0, s = 0; cin >> n;
    while(n > 0){
        s += n % 10;
        n /= 10;
    }
    while(s > 0){
        ans++;
        s /= 10;
    }
    cout << ans;
    return 0;
}