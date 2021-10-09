#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, v[501]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	for(int i = 0; i<n - 1; i++){
		for(int j = i + 1; j<n; j++){
			if(v[i] == v[j]){
				cout << "NU";
				return 0;
			}
		}
	}
	cout << "DA";
	return 0;
}