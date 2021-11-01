int nr_cif(long long int n, long long int k){
    int a = 0;
    while(n > 0){
        if(n % 10 != 0){
            if(k % (n % 10) == 0){
                a++;
            }
        }
        n /= 10;
    }
    return a;
}