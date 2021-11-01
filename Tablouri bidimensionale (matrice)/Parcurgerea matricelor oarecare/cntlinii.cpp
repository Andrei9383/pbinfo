#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, m, a[101][101]; cin >> n >> m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    int ans = 0;
    bool s = true;
    for(int i = 1; i<=n; i++){
        s = true;
        for(int j = 1; j<=m; j++){
            if(a[i][j] != a[i][1]){
                s = false;
            }
        }
        if(s) ans++;
    }
    cout << ans;
    return 0;
}