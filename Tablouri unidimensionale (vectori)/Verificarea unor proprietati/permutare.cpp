#include <algorithm>
#include <iostream>

using namespace std;

int main(){
	int n, v[101], w[101]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	for(int i = 1; i<=n; i++) w[i] = i;
	is_permutation(v, v + n, w + 1) ? cout << "DA" : cout << "NU";
	return 0;
}