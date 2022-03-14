#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream cin1("pozmax.in");
    ofstream cout("pozmax.out");
    float n, max = -1, a = 0, b = 0, c = 0, d = 0; cin1 >> n;
    while(n--){
        c++;
        float x; cin1 >> x;
        if(x > max){
            max = x;
            a = c;
        }
    }
    cin1.close();
    ifstream cin2("pozmax.in");
    float n2; cin2 >> n2;
    while(n2--){
        d++;
        float x; cin2 >> x;
        if(x == max){
            b = d;
        }
    }
    cout << a << " " << b;
    return 0;
}