#include <iostream>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int v[101][101];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> v[i][j];
        }
    }
    for(int i = 0; i<n; i++){
        int ans = 0;
        for(int j = 0; j<m; j++){
            ans += v[i][j];
        }
        cout << ans << " ";
        ans = 0;
    }
    return 0;
}