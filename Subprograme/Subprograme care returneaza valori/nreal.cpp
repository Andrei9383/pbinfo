#include <math.h>
double nreal(int x, int y){
    double a = 0;
    int c = y, b = 0;
    while(c > 0){
        c /= 10;
        b++;
    }
    a = (double)x + (float)y/pow(10, b);
    return a;
}