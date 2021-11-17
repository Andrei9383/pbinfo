#include <iostream>

using namespace std;

int main(){
    int n, a, b, s = 0; cin >> n;
    int v[1001];
    bool a1 = true, b1 = true;

    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i = 0; i<n; i++){
        if(v[i] % 2 != 0 && a1){
            a1 = false;
            a = i;
        }
    }
    for(int i = n - 1; i>=0; i--){
        if(v[i] % 2 != 0 && b1){
            b1 = false;
            b = i;
        }
    }
    for(int i = a; i<=b; i++){
        s += v[i];
    }
    cout << s;
    return 0;
}