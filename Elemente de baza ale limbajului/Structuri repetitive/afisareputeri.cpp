#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, p, c = 1; cin >> n >> p;
    cout << c << " ";
    while(n * c <= p){
        c *= n;
        cout << c << " ";
    }
    return 0;
}