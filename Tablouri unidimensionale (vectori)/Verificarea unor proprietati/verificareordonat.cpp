#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, v[501]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	is_sorted(v, v + n) ? cout << "DA" : cout << "NU";
	return 0;
}