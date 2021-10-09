#include <iostream>

using namespace std;

int main(){
	int n, v[100]; cin >> n;
	for(int i = 1; i<=n; i++) cin >> v[i];
	for(int i = 1; i<=n; i++){
		if(v[i] % 2 == 0){
			++i;
			for(int j = n; j>=i; j--){
				v[j + 1] = v[j];
			}
			v[i] = 2 * v[i - 1];
			++n;
		}
	}
	for(int i = 1; i<=n; i++) cout << v[i] << " ";
	return 0;
}