#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int64_t a, b, p = 1, c = 0; cin >> a >> b;
    for(int i = 0; p != b; i++){
        p *= a;
        c++;
    }
    cout << c;
    return 0;
}