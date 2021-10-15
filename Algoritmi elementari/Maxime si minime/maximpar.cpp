#include <bits/stdc++.h>
using namespace std;
ifstream fin("maximpar.in");
ofstream fout("maximpar.out");
int main()
{
    int n, cnt=0 , max=0;
    fin >> n;
    int a[201];
    for (int i = 0 ; i < n; ++i)
    {
        fin >> a[i];
        if (a[i] % 2 == 0 && a[i] > max)
        max=a[i];
    }
    for (int i = 0 ; i < n; ++i)
    {
        if (a[i]==max)
        cnt++;
    }
    if (cnt==0)
        fout << -1;
    else
    fout << max << ' ' << cnt;
    
    fin.close();
    fout.close();
    
    return 0;
}