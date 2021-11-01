#include <algorithm>
int Impare(int &n){
    int c = n;
    int a[1001], b = 0;
    while(c > 0){
        a[b++] = c % 10;
        c /= 10;
    }
    for(int i = 0; i<b; i++){
        if(a[i] % 2 != 0){
            a[i] -= 1;
        }
    }
    reverse(a, a + b);
    n = 0;
    for(int i = 0; i<b; i++){
        n = n * 10 + a[i];
    }
}