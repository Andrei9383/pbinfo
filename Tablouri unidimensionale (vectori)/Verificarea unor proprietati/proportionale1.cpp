#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, a[101], b[101]; cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    reverse(b, b + n);
    for(int i = 0; i<n; i++){
        if(a[i] * b[i] != a[0] * b[0]){
            cout << "NU";
            return 0;
        }
    }
    cout << "DA";
    return 0;
}