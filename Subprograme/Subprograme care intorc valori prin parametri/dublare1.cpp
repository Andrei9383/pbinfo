#include <algorithm>

int dublare1(int &n){
    int c = n, a[1001], b = 0;
    while(c > 0){
        a[b++] = c % 10;
        c /= 10;
    }
    reverse(a,a + b);
    for(int i = b + 1; i>0; i--){
        a[i] = a[i - 1];
    }
    n = 0;
    for(int i = 0; i<b + 1; i++){
        n = n * 10 + a[i];
    }
}