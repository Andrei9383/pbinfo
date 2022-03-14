int multiplu(int a[], int n, int k){
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(a[i] % 10 == k && a[i] % k == 0) ans++;
    }
    return ans;
}