#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    cout<<n+(n/100*100)+(n%10*10)+(n/10%10)+(n/10%10*100)+(n/100*10)+(n%10)+(n/10%10*100)+(n%10*10)+(n/100)+(n%10*100)+(n/100*10)+(n/10%10)+(n%10*100)+(n/10%10*10)+(n/100);
    return 0;
}