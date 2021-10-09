#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, m, a[101], b[101]; cin >> n;
	for(int i = 0; i<n; i++) cin >> a[i];
	cin >> m;
	for(int i = 0; i<m; i++) cin >> b[i];
	sort(b, b + m);
	cout << count_if(a, a + n, [&](int i){return i > b[m - 1];});
	return 0;
}