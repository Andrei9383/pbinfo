#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a[1000001];
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; ++i)
        cin >> a[i];
    for (int i = 0 ; i < n ; ++i)
    {
        cout << a[i] << ' ';
        if ((a[i]+a[i+1])%2==0)
        {
        if (i==n-1)
        {}
        else
        cout << (a[i]+a[i+1])/2 << ' ';
        }
    }
    return 0;
    
}