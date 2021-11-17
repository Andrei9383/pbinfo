#include <iostream>

using namespace std;

int main(){
    int64_t a, b = 0, s = 0; cin >> a;
    while(a != b){
        s = s + a;
        b = a;
        cin >> a;
    }
    cout << s + a;
    return 0;
}