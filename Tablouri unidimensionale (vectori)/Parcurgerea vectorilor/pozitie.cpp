#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("pozitie.in");
    ofstream cout("pozitie.out");
    int n, v[10001]; cin >> n;
    for(int i = 0; i<n; i++) cin >> v[i];
    int a = v[0];
    sort(v, v + n);
    cout << (search_n(v, v + n, 1, a) - v) + 1;
    return 0;
}