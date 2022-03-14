int DivImpRec(int n){
    if(n % 2 != 0) return n;
    return DivImpRec(n / 2);
}
