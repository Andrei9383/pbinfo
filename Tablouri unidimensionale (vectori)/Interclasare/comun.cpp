#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
    
int a[100005] , b[100005] , c[100005] , d[100005];

int main() {  
    int n; cin >> n;
    for(int i = 1 ; i <= n ; i++) cin >> a[i];
    for(int i = 1 ; i <= n ; i++) cin >> b[i];
    for(int i = 1 ; i <= n ; i++) cin >> c[i];
    int cnt = 0;
    int i = 1 , j = 1;
    while(i <= n && j <= n) {
        if(a[i] == b[j]) d[++cnt] = a[i] , i++ , j++;
        else if(a[i] < b[j]) i++;
        else j++;
    }
    i = 1 , j = 1;
    int rez = -1;
    while(i <= n && j <= cnt) {
        if(c[i] == d[j]) {
            rez = c[i];
            break;
        }
        if(c[i] < d[j]) i++;
        else j++;
    }
    cout << rez;
}