#include <iostream>

using namespace std;

int main(){
    int64_t n; cin >> n;
    int64_t v[100001], s = 0, s1 = 0;
    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i = 0; i<n; i++){
        if(i < n/2) s += v[i];
        else s1 += v[i];
    }
    cout << s * s1;
    return 0;
}