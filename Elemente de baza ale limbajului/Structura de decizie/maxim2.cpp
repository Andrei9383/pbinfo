#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ifstream cin("maxim.in");
    ofstream cout("maxim.out");
    int a, b; cin >> a >> b;
    cout << max({a, b});
    return 0;
}