#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream cin("secvmax.in");
    ofstream cout("secvmax.out");
    int n; cin >> n;
    int a[10001];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int lmax = 0, l = 0, st = 0, dr = 0, sum = 0, summax = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] % 2 == 0){
            sum += a[i];
            l++;
            if(l > lmax)
                lmax = l, st = i - l + 1, dr = i, summax = sum;
            else if(l == lmax)
                if(sum > summax)
                    st = i - l + 1, dr = i, summax = sum;
        }
        else l = 0, sum = 0;
    }
    cout << st << " " << dr;
    return 0;
}