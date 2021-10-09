#include <iostream>

using namespace std;

int main(){
	int n, v[100]; cin >> n;
	for(int i = 1; i<=n; i++) cin >> v[i];
	for(int i = 1; i<=n - 1; i++){
		if(i == 1){
			for(int i = 1; i<=n; i++) cout << v[i] << " ";
		}
		cout << endl;
		int x = v[1];
		for(int j = 2; j<=n; j++){
			v[j - 1] = v[j];
		}
		v[n] = x;
		for(int i = 1; i<=n; i++) cout << v[i] << " ";
	}
	return 0;
}