#include <iostream>

using namespace std;

int main(){
    int64_t n, c, m; cin >> n >> m;
    c = n;
    for(int i = 0; i<m; i++){
        int x; cin >> x;
        n += x;
    }
    if(n == c) cout << "DA";
    else cout << "NU";
}