#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int64_t a, b; cin >> a >> b;
	cout << __gcd(a, b) << " " << (a * b) / __gcd(a, b);
	return 0;
}