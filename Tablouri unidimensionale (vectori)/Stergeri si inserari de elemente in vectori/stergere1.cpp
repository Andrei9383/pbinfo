#include <iostream>

using namespace std;

int main(){
	int n, v[1001]; cin >> n;
	for(int i = 1; i<=n; i++) cin >> v[i];
	for(int i = 1; i<=n; i++){
		if(v[i] % 2 == 0){
			--n;
			for(int j = i; j<=n; j++){
				v[j] = v[j + 1];
			}
			i--;
		}
	}
	for(int i = 1; i<=n; i++) cout << v[i] << " ";
	return 0;
}