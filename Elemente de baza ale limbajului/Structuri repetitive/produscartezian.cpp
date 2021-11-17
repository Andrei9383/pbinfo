#include <iostream>

using namespace std;

int main(){
    int n, m, a[101], b[101]; cin >> n >> m;
    cout << "{";
    for(int i = 1; i<=n; i++){
        for (int j = 1; j<m; j++) {
            cout << '(' << i << ',' << j << "),";
        }
        if (i==n) cout << "(" << i << "," << m << ")";
        else cout << "(" << i << "," << m << "),";
    }
    cout << "}";
    return 0;
} 