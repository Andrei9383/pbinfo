int sum_div(int n, int& s){
    s = 0;
    for(int i = 1; i<=n; i++){
        if(n % i == 0){
            s += i;
        }
    }
}