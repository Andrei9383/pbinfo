#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, v[1001]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	int a = v[n - 1];
	sort(v, v + n);
	reverse(v, v + n);
	for(int i = 0; i<n; i++){
		if(__gcd(v[i], a) == 1) cout << v[i] << " ";
	}
	return 0;
}