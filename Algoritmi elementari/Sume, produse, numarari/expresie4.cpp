#include <iostream>

using namespace std;

int main(){
    int n, s = 0; cin >> n;
    for(int i = 1; i<=n; i++){
        s += i * (n - i + 1);
    }
    cout << "Rezultatul este " << s;
    return 0; 
}