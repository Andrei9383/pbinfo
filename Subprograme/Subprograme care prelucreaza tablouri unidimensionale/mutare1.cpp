int aranjare(int v[], int n){
    int a = 0;
    for(int i = 0; i<n; i++){
        if(v[i] % 2 != 0) swap(v[i], v[a++]);
    }
}