int F(int n, int a[], int& k){
    k = 0;
    bool sc = false;
    for(int i = 0; i<n; i++){
        if(a[i] % 2 == 0){
            sc = true;
            k = k * 10 + a[i];
        }
    }
    if(!sc) k = -1;
}