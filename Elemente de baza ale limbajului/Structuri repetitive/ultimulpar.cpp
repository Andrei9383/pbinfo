#include <iostream>

using namespace std;

int main(){
    int n, ans = 0; cin >> n;
    bool a = false;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        if(x % 2 == 0){
            ans = x;
            a = true;
        }
    }
    if(a) cout << ans;
    else cout << "IMPOSIBIL";
    return 0;
}