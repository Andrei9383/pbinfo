#include <iostream> 
using namespace std;

int main(){
    int64_t n; cin >> n;
    for(int64_t i = n; i<=n*100; i++){
        if(i%100==0){
           cout << i;
           return 0;
        }
    }
    return 0;
}