#include <iostream>

using namespace std;

int main(){
    int64_t n, ln, a = 0; cin >> n; ln = n;
    while(n != 0){
        if(abs(n) % 10 == abs(ln) % 10) a++;
        ln = n;
        cin >> n; 
    }
    cout << a - 1;
    return 0;
}