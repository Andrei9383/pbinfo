#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    long long sumaDiv = 0;
    for (int d = 1; d * d <= n; ++d)
        if (n % d == 0)  
        {
            if (d % 2 == 1)
                sumaDiv += d;
            if (d * d != n && ((n / d) % 2 == 1))
                sumaDiv += n / d;
        }
    
    cout << sumaDiv;
    return 0;
}