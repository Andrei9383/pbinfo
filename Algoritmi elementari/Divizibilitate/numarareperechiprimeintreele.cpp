#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a, b, ans = 0 ; cin >> a >> b;
	while(b != 0){
		if(__gcd(a, b) == 1) ans++;
		a = b;
		cin >> b;
	}
	cout << ans;
	return 0;
}