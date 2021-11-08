#include <iostream>

using namespace std;

int main(){
    int a, b; cin >> a >> b;
    if(a < 0 && b < 0) {cout << "da"; return 0;}
    if(a > 0 && b > 0) {cout << "da"; return 0;}
    if(a == 0 && b == 0) {cout << "da"; return 0;}
    cout << "nu";
    return 0;
}