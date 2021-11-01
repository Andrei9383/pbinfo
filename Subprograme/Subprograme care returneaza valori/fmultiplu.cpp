int multipli(int a, int b, int c){
    while(a % c != 0){
        a++;
    }
    while(b % c != 0){
        b--;
    }
    return (b - a) / c + 1;
}