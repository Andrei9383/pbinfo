#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, v[1001], w[1001]; cin >> n;
    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i = 0; i<n; i++) cin >> w[i];
    sort(v, v + n);
    sort(w, w + n);
    if(equal(v, v + n, w)){
        cout << "DA";
        return 0;
    }
    cout << "NU";
    return 0;
}
