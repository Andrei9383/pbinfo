#include <iostream>

using namespace std;

int main(){
    int n, s = 0, a = 0; cin >> n;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        if(x % 2 == 0) { s += x; a++;}
    }
    cout << (float)s / a;
    return 0;
}