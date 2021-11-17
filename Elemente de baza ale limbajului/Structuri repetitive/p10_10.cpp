#include <iostream>

using namespace std;

int main(){
    int64_t n, k, c = 0, a = 0; cin >> n >> k;
    while(n > 0){
        a++;
        n /= 10;
    }
    cout << 1;
    for(int i = 0; i<k; i++){
        for(int j = 0; j<a - 1; j++){
            cout << 0;
        }
    }
    return 0;
}