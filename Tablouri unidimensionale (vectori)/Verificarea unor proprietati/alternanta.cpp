#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n ,v[1001]; cin >> n;
    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i = 1; i<n; i++){
        if(v[i] == 1 && v[i - 1] == 1){
            cout << "NU";
            return 0;
        }
    }
    cout << "DA";
    return 0;
}
