#include <iostream>

using namespace std;

int main(){
	int n, v[201], a = 0, b = 0; cin >> n;
	for(int i = 1; i<=n; i++) cin >> v[i];
	for(int i = 1; i<=n - 1; i++){
		a = v[n];
		while(v[i] != a){
			if(v[i] > a){
				v[i] -= a;
			}
			else{
				a -= v[i];
			}
		}
		if(v[i] == 1){
			b++;
		}
	}
	cout << b;
	return 0;
}