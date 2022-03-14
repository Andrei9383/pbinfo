int count(double a[], int n){
    int s = 0, ans = 0;
    for(int i = 0; i<n; i++) s += a[i];
    for(int i = 0; i<n; i++){
        if(a[i] >= (float)s / n) ans++;
    }
    return ans;
}