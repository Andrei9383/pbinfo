#include <algorithm>
int perm(int &n){
    int a[1001], b = 0;
    while(n > 0){
        a[b++] = n % 10;
        n /= 10;
    }
    reverse(a, a + b);
    int c = a[0];
    for(int i = 0; i<b - 1; i++){
        a[i] = a[i + 1];
    }
    a[b - 1] = c;
    for(int i = 0; i<b; i++){
        n = n * 10 + a[i];
    }
}