#include <iostream>

using namespace std;

int main(){
    int s, c, n; cin >> s >> c >> n;
    if(s % c == 0 && s % n == 0){ cout << "CN"; return 0;}
    if(s % c  == 0) {cout << "C"; return 0;}
    if(s % n == 0) {cout << "N"; return 0;}
    cout << "nimic";
    return 0;
}