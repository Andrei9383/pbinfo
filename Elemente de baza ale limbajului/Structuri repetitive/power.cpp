#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int64_t a, b; cin >> a >> b;
    unsigned long long p = 1;
    for(int i = 0; i<b;i++){
        p *= a;
    }
    cout << p;
    return 0;
}