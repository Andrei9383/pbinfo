#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("sortare.in");
    ofstream cout("sortare.out");
    int64_t n, a[101]; cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];
    sort(a, a + n, [](int i, int j){return i > j;});
    for(int i = 0; i<n; i++) cout << a[i] << " ";
}