#include <iostream>

using namespace std;

int main(){
    int64_t n, k; cin >> n >> k;
    bool a = true;
    while(n > 0){
        if(n % 10 > k){
            a = false;
        }
        n /= 10;
    }
    if(a) cout << "DA";
    else cout <<"NU";
    return 0;
}