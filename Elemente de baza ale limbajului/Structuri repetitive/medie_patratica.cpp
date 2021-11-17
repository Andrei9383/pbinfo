#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int n; cin >> n;
    long double s = 0;
    for(int i = 0; i<n; i++){
        long double x; cin >> x;
        s += x * x;
    }
    cout << fixed << setprecision(2) << sqrt(s / n);
    return 0;
}