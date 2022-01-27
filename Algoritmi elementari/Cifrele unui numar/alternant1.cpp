#include <iostream>

using namespace std;

int main() {
    int64_t n, a = 1; cin >> n;
    while(n>9) {
        if(n%10%2==n/10%10%2) {
            a=0;
            break;
        }
        n=n/10;
   }
    if(a == 1) cout << "da";
    else cout << "nu";
    
    return 0;
}