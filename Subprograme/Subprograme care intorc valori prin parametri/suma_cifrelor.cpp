int sum_cif(int a, int &b){
    b = 0;
    while(a > 0){
        b += a % 10;
        a /= 10;
    }
}