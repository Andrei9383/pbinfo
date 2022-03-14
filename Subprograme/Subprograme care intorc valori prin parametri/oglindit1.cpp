int oglindit(int n, int &c){
    c = 0;
    while(n > 0){
        c = c * 10 + n % 10;
        n /= 10;
    }
}
