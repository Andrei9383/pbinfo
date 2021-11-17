#include <iostream>

using namespace std;

int main(){
    int64_t n; cin >> n;
    while(n % 10 == 0){
        n /= 10;
    }
    cout << n;
    return 0;
}