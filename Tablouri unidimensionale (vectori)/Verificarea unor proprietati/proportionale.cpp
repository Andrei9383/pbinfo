#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , a[101] , b[101] , s1 = 0 , s2 = 0 , cate = 0;
    cin >> n;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
        s1+=a[i];
    }
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> b[i];
        s2+=b[i];
    }
    for(int i = 0 ; i < n ; ++i)
    {
        int cnt=0;
        for(int j = 0 ; j < n ; ++j)
        {
            if((double)a[i] / b[j] == (double)s1 / s2)
            cnt++;
        }
        if(cnt!=0) cate++;
    }
    if(cate == n) cout << "DA";
    else cout << "NU";
    return 0;
}