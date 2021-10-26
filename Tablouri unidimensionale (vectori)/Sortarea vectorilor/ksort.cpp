#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, k, v[1001]; cin >> n >> k;
	for(int i = 0; i<n; i++) cin >> v[i];
	sort(v, v + k);
	sort(v + k, v + n);
	reverse(v + k, v + n);
	for(int i = 0; i<n; i++) cout << v[i] << " ";
	return 0;
}