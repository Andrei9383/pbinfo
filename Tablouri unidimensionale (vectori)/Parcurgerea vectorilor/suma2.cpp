#include <iostream>

using namespace std;

int main(){
	int n, v[1001]; cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> v[i];
	}
	int f = 0, l = 0, s = 0;
	for(int i = 1; i<=n; i++){
		if(v[i] % 2 == 0){
			f = i;
			break;
		}
	}
	if(f == 0){
		cout << "NU EXISTA";
		return 0;
	}
	for(int i = n; i>=1; i--){
		if(v[i] % 2 == 0){
			l = i;
			break;
		}
	}
	for(int i = f; i<=l; i++){
		s += v[i];
	}
	cout << s;
	return 0;
}