int ordon123(int n, int a[]){
    int cnt1=0 , cnt2=0 , cnt3=0;
    for(int i = 0 ; i < n ; ++i)
    {
        if(a[i]==1) cnt1++;
        if(a[i]==2) cnt2++;
        else cnt3++;
    }
    for(int i = 0 ; i < cnt1 ; ++i) a[i]=1;
    for(int i = cnt1 ; i < cnt1+cnt2 ; ++i) a[i]=2;
    for(int i = cnt1+cnt2 ; i < n ; ++i) a[i]=3;
}