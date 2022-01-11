int prefix(int n, int k, int &out){
    int a = 0, b = 0, c = 0;
    out = 0;
    while(n > 0){
        c = c * 10 + n % 10;
        n /= 10;
    }
    while(c > 0 && a < k){
        out = out * 10 + c % 10;
        c /= 10;
        a++;
    }
}