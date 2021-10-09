#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("nraparitii.in");
    ofstream cout("nraparitii.out");
    int n, v[101]; cin >> n;
    for(int i = 0; i<n; i++) cin >> v[i];
    cout << count(v, v + n, v[n - 1]);
    return 0;
}