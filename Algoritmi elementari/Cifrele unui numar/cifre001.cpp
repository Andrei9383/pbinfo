#include <iostream>

using namespace std;

int main(){
    int64_t a, b, c1 = 0, c2 = 0, c3, c4, ans = 0; cin >> a >> b;
    c3 = a; c4 = b;
    while(a > 0){
        a /= 10;
        c1++;
    }
    while(b > 0){
        b /= 10;
        c2++;
    }
    if(c1 != c2){
        cout << "NU";
        return 0;
    }
    else{
        while(c3 > 0){
            if(c3 % 10 == c4 % 10) ans++;
            c3 /= 10;
            c4 /= 10;
        }
        cout << "DA" << endl << ans;
    }
    return 0;
}