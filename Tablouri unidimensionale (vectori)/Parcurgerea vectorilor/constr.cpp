#include <iostream>

using namespace std;

int main(){
	int n, v[201], a[201]; cin >> n;
	for(int i = 1; i<=n; i++){
		a[i] = 0;
	}
	for(int i = 1; i<=n; i++){
		cin >> v[i];
	}
	for(int i = 1; i<=n; i++){
		int c1 = v[i], s = 0;
		while(c1 > 0){
			s += c1 % 10;
			c1 /= 10;
		}
		a[i] = v[i] % s;
	}
	for(int i = 1; i<=n; i++){
		cout << a[i] << " ";
	}
	return 0;
}