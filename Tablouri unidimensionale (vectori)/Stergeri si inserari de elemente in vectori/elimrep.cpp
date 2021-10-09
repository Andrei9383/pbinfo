#include <iostream>

using namespace std;

int main(){
	int n, v[1001]; cin >> n;
	for(int i = 1; i<=n; i++) cin >> v[i];
	for(int i = 1; i<=n - 1; i++){
		for(int j = i + 1; j<=n; j++){
			if(v[i] == v[j]){
				n--;
				for(int k = j; k<=n; k++){
					v[k] = v[k + 1];
				}
				i--;
			}
		}
	}
	for(int i = 1; i<=n; i++) cout << v[i] << " ";
	return 0;
}