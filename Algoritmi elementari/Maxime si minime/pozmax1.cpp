#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int n, max = -1, a = 0, b = 0; cin >> n;
    for(int i = 1; i<=n; i++){
        float x; cin >> x;
        if(x > max){
            max = x;
            a = i;
        }
        if(x == max){
            b = i;
        }
    }
    cout << a << " " << b;
    return 0;
}