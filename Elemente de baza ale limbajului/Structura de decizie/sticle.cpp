#include <iostream>

using namespace std;

int main(){
    int x, y, ans = 0; cin >> x >> y;
    while(y > 0){
        y -= x;
        ans++;
    }
    cout << ans;
    return 0;
}