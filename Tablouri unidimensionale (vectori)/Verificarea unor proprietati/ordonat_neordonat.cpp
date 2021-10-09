#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, v[1001]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	if(equal(v + 1, v + n, v)){
		cout << "sir constant";
		return 0;
	}
	if(is_sorted(v, v + n, [](int i, int j){return i <= j;})){
		cout << "sir strict crescator";
		return 0;
	}
	if(is_sorted(v, v + n, [](int i, int j){return i < j;})){
		cout << "sir crescator";
		return 0;
	}
	if(is_sorted(v, v + n, [](int i, int j){return i >= j;})){
		cout << "sir strict descrescator";
		return 0;
	}
	if(is_sorted(v, v + n, [](int i, int j) {return i > j;})){
		cout << "sir descrescator";
		return 0;
	}
	cout << "sir neordonat";
	return 0;
}