#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,s; cin>>a;
    int n; 
    s=3*(a*a+a*a*a*a)/(a*a+a*a*a*a+sqrt(a*a+a*a*a*a))+sqrt(a*a+a*a*a*a);
    n=int(s);
    cout<<n;
    return 0;
}