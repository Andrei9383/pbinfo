#include <iostream>

using namespace std;

int main(){
    int64_t n; cin >> n;
    if(n == 0){
        cout << 0;
        return 0;
    }
    while(n > 0){
        if((n % 10) % 2 == 0){
            cout << n % 10;
            return 0;
        }
        n /= 10;
    }
    cout << -1;
    return 0;
}