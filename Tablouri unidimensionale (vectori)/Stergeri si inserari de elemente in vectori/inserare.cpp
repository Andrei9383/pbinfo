#include <iostream>

using namespace std;

int main(){
	int n, x, p, v[100]; cin >> n >> x >> p;
	for(int i = 1; i<=n; i++) cin >> v[i];
	for(int i = n; i>=p; i--){
		v[i + 1] = v[i];
	}
	v[p] = x;
	n++;
	for(int i = 1; i<=n; i++) cout << v[i] << " ";
	return 0;
}