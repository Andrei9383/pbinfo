#include <iostream>

using namespace std;

int main(){
    int64_t n, max = 0; cin >> n;
    bool a = false;
    if(n == 0){
        cout << "nu exista";
        return 0;
    }
    while(n > 0){
        if((n % 10) % 2 != 0 && n % 10 > max){
            max = n % 10;
            a = true;
        }
        n /= 10;
    }
    if(a) cout << max;
    else cout << "nu exista";
    return 0;
}