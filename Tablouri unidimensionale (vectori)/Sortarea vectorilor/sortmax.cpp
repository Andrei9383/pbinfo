#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, max = -1, v[1001], k; cin >> n;
	for(int i = 0; i<n; i++){
		cin >> v[i];
		if(v[i] > max){
			max = v[i];
			k = i;
		}
	}
	sort(v, v + k);
	sort(v + k, v + n);
	reverse(v + k, v + n);
	for(int i = 0; i<n; i++) cout << v[i] << " ";
	return 0;
}