#include <iostream>

using namespace std;

int main(){
    int n, max = -1, min = 1000; cin >> n;
    while(n--){
        int x; cin >> x;
        if(x > max) max = x;
        if(x < min) min = x;
    }
    cout << max + min;
    return 0;
}