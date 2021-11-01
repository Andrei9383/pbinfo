#include <math.h>
unsigned int nr_prim(unsigned int n){
    bool a = true;
    for(int i = n + 1; i<= n * n; i++){
        a = true;
        for(int d = 2; d<=sqrt(i); d++){
            if(i % d == 0){
                a = false;
            }
        }
        if(a) return i;
    }
}