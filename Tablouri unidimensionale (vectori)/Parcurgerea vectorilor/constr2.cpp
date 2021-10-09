#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, v[201], w[201], a = 0, b = 0; cin >> n;
	for(int i = 1; i<=n; i++){
		a = 0;
		cin >> v[i];
		for(int d = 2; d<=sqrt(v[i]); d++){
			if(v[i] % d == 0){
				a++;
			}
		}
		if(a == 0){
			w[++b] = v[i];
		}
	}
	for(int i = b; i>=1; i--){
		cout << w[i] << " ";
	}
	return 0;
}