#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, v[201], a = 0; cin >> n;
	for(int i = 1; i<= n; i++) cin >> v[i];
	for(int i = 1; i<=n; i++){
		a = 0;
		for(int d = 2; d<=sqrt(v[i]); d++){
			if(v[i] % d == 0){
				a++;
			}
		}
		if(a == 0){
			cout << "DA";
			return 0;
		}
	}
	cout << "NU";
	return 0;
}