#include <iostream>

using namespace std;

int main(){
    int64_t n, a = 0; cin >> n;
    while(n != 0){
        if(n % 2 != 0) a++;
        cin >> n;
    }
    cout << a;
    return 0;
}