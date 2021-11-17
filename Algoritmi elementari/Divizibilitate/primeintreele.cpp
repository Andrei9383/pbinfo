#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int64_t a, b; cin >> a >> b;
	if(__gcd(a, b) == 1) cout << "PIE";
	else cout << "NOPIE";
	return 0;
}