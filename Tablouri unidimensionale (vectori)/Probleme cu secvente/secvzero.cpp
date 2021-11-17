#include <iostream>

using namespace std;

int main(){
    int n, v[1001], max = -1, a = 0, b, c; cin >> n;
    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i = 0; i<n; i++){
        if(v[i] == 0){
            a = 0;
            for(int j = i; v[j] == 0 && j<n; j++){
                a++;
            }
            if(a > max){
                max = a;
                b = i;
                c = i + a;
            }
        }
    }
    cout << b + 1 << " " << c;
    return 0;
}