#include <iostream>

using namespace std;

int main(){
	int n, a = 0, b = 0, c = 0; cin >> n;
	while(n > 0){
		a = a * 10 + n % 10;
		n /= 10;
	}
	for(int i = 1; i<=a; i++){
		if(a % i == 0){
			b++;
		}
	}
	cout << b;
	return 0;
}