#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int a, b; cin >> a >> b;
	if(a == 0 && b == 0){
		cout << -1;
		return 0;
	}
	cout << __gcd(a, b);
	return 0;
}