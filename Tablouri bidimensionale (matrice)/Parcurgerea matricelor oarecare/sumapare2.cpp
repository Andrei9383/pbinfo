#include <iostream>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int ans = 0;
    for(int i = 0; i<n * m; i++){
        int x; cin >> x;
        if(x % 2 == 0) ans += x;
    }
    cout << ans;
    return 0;
}