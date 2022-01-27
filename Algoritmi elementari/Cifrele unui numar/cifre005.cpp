#include <iostream>

using namespace std;

int main(){
    int n, r, ans = 0; cin >> n >> r;
    while(n--){
        int64_t x; cin >> x;
        if(x % 9 == r) ans++;
    }
    cout << ans;
    return 0;
}