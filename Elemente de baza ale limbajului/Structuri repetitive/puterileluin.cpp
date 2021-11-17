#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int64_t n, p; cin >> n >> p;
    int64_t a = 1;
    cout << a << " ";
    while(a * n <= p){
        cout << a * n << " ";
        a *= n;
    }
    return 0;
}