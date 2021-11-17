#include <iostream>

using namespace std;

int main(){
    int64_t n, max = 0, ans = 0; cin >> n;
    for(int i = 0; i<n; i++){
        max = 0;
        int x; cin >> x;
        while(x > 0){
            if(x % 10 > max){
                max = x % 10;
            }
            x /= 10;
        }
        if(max % 2 != 0) ans++;
    }
    cout << ans;
    return 0;
}