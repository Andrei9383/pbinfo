#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long rez = 0;
    for(int i = 1; i <= n; ++i){
        long long pow = 1;
        for(int j = 1; j <= i; ++j)
            pow = 1LL * pow * i;
        rez += pow;
    }
    cout << "Rezultatul este " << rez;
    return 0;
}