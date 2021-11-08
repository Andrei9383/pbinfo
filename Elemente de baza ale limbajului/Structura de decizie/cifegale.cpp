#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    if(n % 10 == (n / 10) % 10 && n % 10 == n / 100) cout << "da";
    else cout << "nu";
    return 0;
}