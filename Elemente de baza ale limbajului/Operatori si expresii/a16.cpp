#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double x;
    cin >> x;
    double a = 1.0;
    int i;
    for(int i = 1; i<=16; i++){
        a = a * x;
    }
    cout << (long long)a;
}