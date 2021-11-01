unsigned long int nr_cif_zero(long long int n){
    if(n == 0) return 1;
    long long int a = 0;
    while(n > 0){
        if(n % 10 == 0) a++;
        n /= 10;
    }
    return a;
}