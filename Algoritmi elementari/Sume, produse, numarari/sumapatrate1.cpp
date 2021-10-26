#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, s = 0; cin >> n;
    for(int i = n; i>=1; i--){
        if((float)sqrt(i) == (int)(sqrt(i))){
            s += i;
        }
    }
    cout << "Rezultatul este " << s;
    return 0;
}