#include <iostream>

using namespace std;

int main(){
	int64_t n; cin >> n;
	for(int i = 2; i<=n; i++){
		if(n % i == 0){
			cout << i * i;
			return 0;
		}
	}
	return 0;
}