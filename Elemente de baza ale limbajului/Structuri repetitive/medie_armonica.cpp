#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n; cin >> n;
    long double x;
    long double p = 0;
    for(int i = 0 ; i < n ; ++i)
        cin >> x , p += 1 / x;
    cout << fixed << setprecision(2) << n/p;
    return 0;
}