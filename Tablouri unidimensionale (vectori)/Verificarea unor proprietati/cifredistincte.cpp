#include <iostream>
#include <algorithm>

using namespace std;

bool dist(int i){
    bool a = false;
    int c = i;
    bool v[10] = {false};
    while(c > 0){
        if(v[c % 10]){
            return false;
        }
        v[c % 10] = true;
        c /= 10;
    }
    if(c == 0){
        return true;
    }
}

int main(){
    int n, v[1001]; cin >> n;
    for(int i = 0; i<n; i++) cin >> v[i];
    if(all_of(v, v + n, dist)){
        cout << "DA";
        return 0;
    }
    cout << "NU";
    return 0;
}
