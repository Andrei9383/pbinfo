#include <bits/stdc++.h>
bool prim(int n)
{
    int cnt=0;
    for(int i = 1 ; i * i <= n ; ++i)
        if(n % i == 0 && i * i != n)
            cnt+=2;
        else if(i * i == n)
            cnt++;
    if(cnt == 2)
        return 1;
    return 0;
}
int Phi(int n)
{
    if(prim(n))
        return n-1;
    int d=2;
    int rez = 1;
    while(n>1)
    {
        int p = 0;
        while(n % d==0)
            n/=d , p++;
        if(p != 0)
            rez = rez * (d-1) * pow(d , p - 1);
        d++;
        if(d * d > n)
            d = n;
    }
    return rez;
}