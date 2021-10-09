#include <iostream>

using namespace std;

int main(){
	int n, v[201], a = 0; cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> v[i];
	}
	for(int i = 1; i<=n / 2; i++){
		while(v[i] != v[n - i + 1]){
			if(v[i] > v[n - i + 1]){
				v[i] -= v[n - i + 1];
			}
			else{
				v[n - i + 1] -= v[i];
			}
		}
		if(v[i] == 1){
			a++;
		}
	}
	cout << a;
	return 0;
}