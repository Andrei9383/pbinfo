#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    long long rez = 1;
    for(long long i = 2; i <= n; ++i)
        rez *= i;
    cout << rez;
    return 0;
}