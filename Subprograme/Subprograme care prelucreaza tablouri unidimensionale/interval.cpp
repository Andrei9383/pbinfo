int interval(int a[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(a[0] > a[n - 1]){
            if(a[i] <= a[0] && a[i] >= a[n - 1]) ans++;
        }
        else{
            if(a[i] >= a[0] && a[i] <= a[n - 1]) ans++;
        }
    }
    return ans;
}