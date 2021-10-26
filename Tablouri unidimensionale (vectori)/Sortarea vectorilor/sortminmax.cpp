#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, v[1001], max = -1, min = 1000001, pozmax, pozmin; cin >> n;
	for(int i = 0; i<n; i++){
		cin >> v[i];
		if(v[i] > max){
			max = v[i];
			pozmax = i;
		}
		if(v[i] < min){
			min = v[i];
			pozmin = i;
		}
	}
	for(int i = pozmax; i <= pozmin - 1; i++){
		for(int j = i + 1; j<=pozmin; j++){
			if(v[i] > v[j]) swap(v[i], v[j]);
		}
	}
	for(int i = 0; i<n; i++) cout << v[i] << " ";
	return 0;
}