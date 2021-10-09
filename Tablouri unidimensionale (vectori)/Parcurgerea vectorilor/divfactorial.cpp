#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, v[100], p = 1; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	for(int i = 1; i<=n; i++) p *= i;
	for(int i = 0; i<n; i++){
		if(p > v[i]){
			if(p % v[i] == 0){
				cout << v[i] << " ";
			}
		}
		else if(v[i] % p == 0){
			cout << v[i] << " ";
		}
	}
	return 0;
}