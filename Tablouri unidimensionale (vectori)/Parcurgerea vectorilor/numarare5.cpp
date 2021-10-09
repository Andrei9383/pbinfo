#include <iostream>

using namespace std;

int main(){
	int n, v[201]; cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> v[i];
	}
	int s = 0, a = 0, b = 0, c1, c2;
	for(int i = 1; i<=n - 1; i++){
		s = 0;
		c1 = v[i];
		while(c1 > 0){
			s += c1 % 10;
			c1 /= 10;
		}
		for(int j = i + 1; j<=n; j++){
			a = 0;
			c2 = v[j];
			while(c2 > 0){
				a += c2 % 10;
				c2 /= 10;
			}
			if(a == s){
				b++;
			}
		}
	}
	cout << b;

	return 0;
}