#include <iostream>

using namespace std;

int main(){
    int n, max = -1, ans = 0; cin >> n; 
    int c = n;
    if(n == 0){
        cout << 0 << " " << 1;
        return 0;
    }
    while(n > 0){
        if(n % 10 > max){
            max = n % 10;
        }
        n /= 10;
    }
    while(c > 0){
        if(c % 10 == max) ans++;
        c /= 10;
    }
    cout << max << " " << ans;
    return 0;
}