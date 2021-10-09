#include <bits/stdc++.h>
using namespace std;
ifstream fin("blackfriday.in");
ofstream fout("blackfriday.out");

int main()
{
    double n,a[11],b[11],x,ma=-1,ind;
    fin>>n;
    for(int i=1;i<=n;i++)fin>>a[i];
    for(int i=1;i<=n;i++)fin>>b[i];
    for(int i=1;i<=n;i++)
    {x=(a[i]-b[i])*100/a[i];
        if(x>ma)
        {ma=x;
        ind=i;}
    }

    fout<<ind;
    return 0;
}