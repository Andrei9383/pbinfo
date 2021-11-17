#include <iostream>

using namespace std;

int main(){
	int n, a = 0, b = 1; cin >> n;
	while(b * b < n){
		if(n % b == 0) a += 2;
		b++;
	}
	if(b * b == n) a++;
	if(a % 2 == 0) cout << "nu";
	else cout << "da";
	return 0;
}