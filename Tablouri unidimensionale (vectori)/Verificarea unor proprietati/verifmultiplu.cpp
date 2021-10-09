#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, v[101]; cin >> n;
    for(int i = 0; i<n; i++) cin >> v[i];
    if(all_of(v, v + n, [&](int i){return i % v[n - 1] == 0;})){
        cout << "DA";
        return 0;
    }
    cout << "NU";
    return 0;
}
