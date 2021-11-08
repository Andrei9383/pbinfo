#include <iostream>

using namespace std;

int main(){
    int a, ans = 0; cin >> a;
    while(a > 0){
        if((a % 10) % 2 != 0) ans++;
        a /= 10;
    }
    cout << ans;
    return 0;
}