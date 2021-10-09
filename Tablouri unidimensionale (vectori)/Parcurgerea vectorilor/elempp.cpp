#include <iostream>
#include <algorithm>
#include <math.h>
#include <fstream>

using namespace std;

bool pp(int i){
    int a = 0, b = i, c = i;
    while(c > 0){
        c /= 10;
        a++;
    }
    if((int)sqrt(b / (int)pow(10, a - 2)) == (float)sqrt(b / (int)pow(10, a - 2))){
        return true;
    }
    return false;
}

int main(){
    ifstream cin("elempp.in");
    ofstream cout("elempp.out");
    int n, v[101]; cin >> n;
    for(int i = 0; i<n; i++) cin >> v[i];
    for(int i = 0; i<n; i++){
        if(pp(v[i])){
            cout << v[i] << " ";
        }
    }
    return 0;
}