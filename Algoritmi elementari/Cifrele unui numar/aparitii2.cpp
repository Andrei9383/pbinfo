#include <iostream>

using namespace std;

int main(){
    int n, ans = 0; cin >> n;
    int c = n;
    if(n == 0){
        cout << 1;
        return 0;
    }
    while(c > 9){
        c /= 10;
    }
    while(n > 0){
        if(n % 10 == c) ans++;
        n /= 10;
    }
    cout << ans;
    return 0;
}