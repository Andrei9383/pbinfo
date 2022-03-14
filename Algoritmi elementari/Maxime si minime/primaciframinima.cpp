#include <iostream>

using namespace std;

int main(){
    int n, min = 1000, minn; cin >> n;
    while(n--){
        int x; cin >> x;
        int c = x;
        while(x > 9){
            x /= 10;
        }
        if(x < min || (x == min && c > minn)){
            min = x;
            minn = c; 
        }
    }
    cout << minn;
    return 0;
}