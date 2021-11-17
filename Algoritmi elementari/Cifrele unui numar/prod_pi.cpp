#include <iostream>

using namespace std;

int main(){
    int64_t n, min = 11, max = -1, p = 1; cin >> n;
    while(n > 0){
        if((n % 10) % 2 == 0 && n % 10 > max) max = n % 10;
        if((n % 10) % 2 != 0 && n % 10 < min) min = n % 10;
        n /= 10;
    }
    cout << min * max;
    return 0;
}