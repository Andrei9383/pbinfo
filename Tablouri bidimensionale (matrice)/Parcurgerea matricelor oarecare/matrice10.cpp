#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    unsigned n, m, a[100][100], min1 = 1e4 + 1, min2 = 1e4 + 1, min1x, min1y, min2x, min2y; cin >> n >> m;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i<=n; i++){
        if(a[i][1] < min1){
            min1 = a[i][1];
            min1x = i;
            min1y = 1;
        }
    }
    for(int i = 1; i<=n; i++){
        if(a[i][m] < min2){
            min2 = a[i][m];
            min2x = i;
            min2y = m;
        }
    }
    swap(a[min1x][min1y], a[min2x][min2y]);
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}