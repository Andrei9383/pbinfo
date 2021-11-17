#include <iostream>

using namespace std;

int main(){
    int n, a = 1, b = 1, c = 0, d; cin >> n;
    while(n--){
        if(c == 0 || c == 1){
            cout << 1 << " ";
            c++;
            continue;
        }
        d = a + b;
        a = b;
        b = d;
        cout << d << " ";
        c++;
    }
    return 0;
}