#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, v[1001]; cin >> n;
    for(int i = 0; i<n; i++) cin >> v[i];
    if(all_of(v, v + n, [&](int i){if(v[0] < v[n - 1]) {return i >= v[0] && i <= v[n - 1];} else {return i <= v[0] && i >= v[n - 1];}})){
        cout << "DA";
        return 0;
    }
    cout << "NU";
    return 0;
}
