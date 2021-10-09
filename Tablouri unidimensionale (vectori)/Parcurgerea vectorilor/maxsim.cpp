#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
    ifstream cin("maxsim.in");
    ofstream cout("maxsim.out");
    int n, v[1001], max = -1, poz1, poz2; cin >> n;
    for(int i = 1; i<=n; i++) cin >> v[i];
    for(int i = 1; i<=n/2; i++){
        if(v[i] + v[n - i + 1] > max){
            max = v[i] + v[n - i + 1];
            poz1 = i;
            poz2 = n - i + 1;
        }
    }
    cout << max << " " << poz1 << " " << poz2;
    return 0;
}