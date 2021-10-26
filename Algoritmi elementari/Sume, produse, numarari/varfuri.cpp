#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int v[1001], s = 0;
    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i = 1; i<n - 1; i++){
        if(v[i] > v[i - 1] && v[i] > v[i + 1]) s += v[i];
    }
    cout << s;
    return 0;
}