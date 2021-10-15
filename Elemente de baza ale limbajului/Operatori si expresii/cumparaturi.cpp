#include <iostream>

using namespace std;

int main(){
    int b, s, c = 0, p = 0; cin >> b >> s;
    cout << s / b << " " << b - (s % b);
    return 0;
}