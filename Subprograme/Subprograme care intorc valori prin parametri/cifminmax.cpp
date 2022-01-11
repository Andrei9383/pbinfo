int cifminmax(int n, int &max, int &min){
    if(n == 0){
        max = 0;
        min = 0;
        return 0;
    }
    max = -1;
    min = 10;
    while(n > 0){
        if(n % 10 > max) max = n % 10;
        if(n % 10 < min) min = n % 10;
        n /= 10;
    }
}