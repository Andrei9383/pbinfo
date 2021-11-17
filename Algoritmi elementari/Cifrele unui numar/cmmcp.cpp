#include <iostream>

using namespace std;

int main(){
    int64_t n, max = 0; cin >> n;
    if(n == 0){
        cout << 0; 
        return 0;
    }
    bool a = false;
    while(n > 0){
        if((n % 10) % 2 == 0){
            if(n % 10 > max) {max = n % 10; a = true;}
        }
        n /= 10;
    }
    if(a) cout << max;
    else cout << 10;
    return 0;
}