int UCP(int n){
    if(n == 0) return 0;
    while(n > 0){
        if(n % 2 == 0) return n % 10;
        n /= 10;
    }
    return -1;
}