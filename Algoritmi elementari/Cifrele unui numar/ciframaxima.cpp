#include <iostream>

using namespace std;

int main(){
    int64_t n, max = 0; cin >> n;
    while(n > 0){
        if((n % 10) > max) max = n % 10;
        n /= 10;
    }
    cout << max;
    return 0;
}