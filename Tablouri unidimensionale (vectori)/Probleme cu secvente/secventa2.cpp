#include <iostream>

using namespace std;

int main(){
    int n, m, x[1001], y[1001], ans = 0;; cin >> n;
    for(int i = 0; i<n; i++) cin >> x[i];
    cin >> m;
    for(int i = 0; i<m; i++) cin >> y[i];
    for(int i = 0; i<n; i++){
        bool a = true;
        if(x[i] == y[0]){
            for(int j = 1; j<m; j++){
                if(x[i + j] != y[j]) a = false;
            }
            if(a) ans++;
        }
    }
    cout << ans;
    return 0;
}