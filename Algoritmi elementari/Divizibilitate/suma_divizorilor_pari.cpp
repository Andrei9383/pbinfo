#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long int sum = 0;
    for(int d = 1; d * d <= n; ++d){
        if(n % d == 0){
            if(d % 2 == 0)
                sum += d;
            if(n / d % 2 == 0)
                sum += n/d;
        }
        if(d * d == n && d % 2 == 0)
            sum -= d;
    }
    cout << sum;
    return 0;
}
