#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, v[1001]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	for(int i = 0; i<n; i++){
		auto it = find_if(v + i, v + n, [&](int j){return j > v[i];});
		if(it != v + n){
			cout << *it << " ";
		}
		else{
			cout << -1 << " ";
		}
	}
	return 0;
}