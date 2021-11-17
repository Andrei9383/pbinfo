#include <iostream>

using namespace std;

int main(){
    int n, max = - 1, a = 0, b, c; cin >> n;
    int v[1001];
    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i = n; i>=0; i--){
        a = 0;
        for(int j = i; v[j] == v[i] && j>=0; j--){
            a++;
        }
        if(a > max){
            max = a;
            b = i;
            c = i + 1 - a;
        }
    }
    cout << c + 1 << " " << b + 1;
    return 0;
}