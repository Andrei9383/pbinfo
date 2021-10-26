#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, v[1001]; cin >> n;
	for(int i = 0; i<n; i++){
		cin >> v[i];
		int min = 10;
		while(v[i] > 0){
			if(v[i] % 10 < min){
				min = v[i] % 10;
			}
			v[i] /= 10;
		}
		v[i] = min;
	}
	sort(v, v + n);
	bool sc = true;
	while(v[0] == 0){
		if(!sc) break;
		for(int i = 0; i<n; i++){
			if(v[i] != 0){
				int a = v[0];
				v[0] = v[i];
				v[i] = a;
				sc = false;
				break;
			}
		}
	}
	for(int i = 0; i<n; i++) cout << v[i];
	return 0;
}