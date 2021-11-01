int NrDiv(int n){
    int a = 0;
    for(int i = 1; i * i<=n; ++i){
        if(n % i == 0){
            a += 2;
        }
        if(i * i == n){
            a--;
        }
    }
    return a; 
}

int NextNrDiv(int n){
    for(int i = n  + 1; i<= 2 * n ; ++i){
        if(NrDiv(i) == NrDiv(n)){
            return i;
        }
    }
}

int PrevNrDiv(int n){
    for(int i = n - 1; i>=1; --i){
        if(NrDiv(i) == NrDiv(n)){
            return i;
        }
    }
    return -1;
}
