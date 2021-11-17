#include <iostream>

using namespace std;

int main(){
    int64_t n, s = 0; cin >> n;
    while(n != 0){
        s += n;
        cin >> n;
    }
    cout << s;
    return 0;
}