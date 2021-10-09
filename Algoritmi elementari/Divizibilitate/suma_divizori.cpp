#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n != 1){
        long long sum = 0;
        for(int d = 1; d * d <= n; ++d){
            if(n % d == 0){
                sum += d;
                sum += n / d;
            }
            if(d * d == n)
                sum -= d;
        }
        cout << sum;
    }
    else
        cout << 1;
    return 0;
}