#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, v[1001]; cin >> n;
    for(int i = 0; i<n; i++) cin >> v[i];
    cout << *max_element(v, v + n) << " " << count(v, v + n, *max_element(v, v + n));
    return 0;
}