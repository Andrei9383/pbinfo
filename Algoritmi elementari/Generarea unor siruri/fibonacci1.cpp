#include <iostream>

using namespace std;

int main() {
    int n, a = 1, b = 1, c; cin >> n;
    if(n == 1) cout << 1 << " " << 1;
    else {
        cout << 1 << " " << 1 << " ";
        while(n >= b){
            c = a + b;
            a = b;
            b = c;
            if(b <= n)
                cout << b << " ";
        }
    }
    return 0;
}