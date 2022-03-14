int sterge(int v[], int& n, int i, int j){
    int a = j - i + 1;
    for(int k = j + 1; k<=n; k++){
        v[k - a] = v[k];
    }
    n -= a;
}