#include <iostream>

using namespace std;

int main(){
	int n, v[201], s = 0, w[201]; cin >> n;
	for(int i =1; i<=n; i++) cin >> v[i];
	for(int i = 1; i<=n; i++){
		s = 0;
		for(int j = i + 1; j<=n; j++){
			s += v[j];
		}
		for(int k = i - 1; k>=1; k--){
			s += v[k];
		}
		w[i] = s;
	}
	for(int i = 1; i<=n; i++){
		cout << w[i] << " ";
	}
	return 0;
}