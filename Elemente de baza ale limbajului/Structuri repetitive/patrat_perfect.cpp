#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        if((int)sqrt(x) == (float)sqrt(x)) cout << "DA" << endl;
        else cout << "NU" << endl;
    }
    return 0;
}