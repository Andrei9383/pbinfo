#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c; float d; cin >> a >> b >> c;
    d = (a + b + c) / 3.;
    d = (int) (d * 100) / 100.;
    cout << fixed << setprecision(2) << d;
    return 0;
}