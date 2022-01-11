int P(int &n, int c){
    int v[1001];
    int a = 0;
    while(n){
        if(n % 10 != c){
            v[a++] = n % 10;
        }
        n /= 10;
    }
    for(int i = 0; i<a; i++){
        n = n * 10 + v[a - i - 1];
    }
}