#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, m, v[101][101]; cin >> n >> m;
    int ans = 0;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> v[i][j];
        }
    }
    for(int i = 2; i<=n; i = i + 2){
        for(int j = 1; j<=m; j++){
            int a = 0;
            if(v[i][j] == 1 || v[i][j] == 0 || v[i][j] % 2 == 0) continue;
            for(int d = 2; d<=sqrt(v[i][j]); d++){
                if(v[i][j] % d == 0) a++;
            }
            if(a == 0) ans++;
        }
    }
    cout << ans;
    return 0;
}