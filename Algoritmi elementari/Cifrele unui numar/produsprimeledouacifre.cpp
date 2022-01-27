#include <iostream>

using namespace std;

int main(){
    int64_t n; cin >> n;
    while(n > 99){
        n /= 10;
    }
    cout << (n / 10) * (n % 10);
    return 0;
}