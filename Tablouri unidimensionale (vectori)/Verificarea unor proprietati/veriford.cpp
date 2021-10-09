#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, v[1100]; cin >> n;
		for(int i = 0; i<n; i++) cin >> v[i];
		if(is_sorted(v, v + n)){
			cout << 1 << " ";
		}
		else{
			cout << 0 << " ";
		}
	}
	return 0;
}