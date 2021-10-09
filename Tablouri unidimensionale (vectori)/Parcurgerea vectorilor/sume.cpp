#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("sume.in");
    ofstream cout("sume.out");
    int n, v[1001], max = -1, poz1, poz2; cin >> n;
    for(int i = 1; i<=n; i++) cin >> v[i];
    for(int i = 1; i<=n; i++){
        int s = 0;
        for(int j = 1; j<=n - i + 1; j++){
            s += v[j];
        }
        cout << s << endl;
    }
    return 0;
}