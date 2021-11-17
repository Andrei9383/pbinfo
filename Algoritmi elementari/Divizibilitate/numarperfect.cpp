#include <iostream>

using namespace std;

int main(){
	int n, a = 0; cin >> n;
	for(int i = 2; i<=n / 2; i++){
		if(n % i == 0){
			a += i;
		}
	}
	a += 1 + n;
	if(a == 2 * n) cout << n << " este perfect";
	else cout << n << " nu este perfect";
	return 0;
}