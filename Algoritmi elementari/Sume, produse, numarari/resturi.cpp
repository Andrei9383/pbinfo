#include <iostream>

using namespace std;

int main(){
    int64_t n, k; cin >> n >> k;
    cout << (n / k) * (((k - 1) * k) / 2) + (n % k) * (n % k+ 1) / 2;
    return 0;
}