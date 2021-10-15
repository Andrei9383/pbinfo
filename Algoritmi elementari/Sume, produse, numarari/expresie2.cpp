#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int s = 0;
    for(int i = 1; i<=n; i++){
        s +=  i * (i + 1);
    }
    cout << "Rezultatul este " << s;
    return 0;
}