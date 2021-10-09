#include <algorithm>
#include <iostream>

using namespace std;

int main(){
	int n, m, a[1001], b[1001]; cin >> n;
	for(int i = 0; i<n; i++) cin >> a[i];
	cin >> m;
	for(int i = 0; i<m; i++) cin >> b[i];
	for(int i = 0; i<m; i++){
		if(find(a, a + n, b[i]) != a + n){
			cout << 1 << " ";
		}
		else{
			cout << 0 << " ";
		}
	}
	return 0;
}