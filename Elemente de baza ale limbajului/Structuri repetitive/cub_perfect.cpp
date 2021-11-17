#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i =0 ; i<n; i++){
        int x; cin >> x;
        if((int)cbrt(x) == (float)cbrt(x)) cout << "DA" << endl;
        else cout << "NU" << endl;
    }
    return 0;
}