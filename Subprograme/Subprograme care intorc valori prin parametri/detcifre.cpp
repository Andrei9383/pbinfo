#include <math.h>
int detcifre(int a, int &b, int &c){
    int d = a, n = 0;
    while(d > 0){
        d /= 10;
        n++;
    }
    c = a % 10;
    b = a / pow(10, n - 1);
}
