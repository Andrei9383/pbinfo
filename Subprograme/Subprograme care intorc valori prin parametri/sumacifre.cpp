int sumcif(int a, int &b, int &c){
    b = 0; c = 0;
    while(a > 0){
        if((a % 10) % 2 == 0){
            b += a % 10;
        }
        else{
            c += a % 10;
        }
        a /= 10;
    }
}