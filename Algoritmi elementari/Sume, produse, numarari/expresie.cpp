#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    long long s = 0;
    for(int i = 1; i<=n; i++){
        long long p = 1;
        for(int j = 1; j<=i; j++){
            p *= j;
        }
        s += p;
    }
    cout << "Rezultatul este " << s;
    return 0;
}