#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, v[101], last = 1e5, a = 0, b = 0; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	for(int i = 0; i<n; i++){
		if(v[i] % 2 == 0){
			if(v[i] > last){
				a++;
			}
			last = v[i];
			b++;
		}
	}
	if(a == b - 1){
		cout << "DA";
	}
	else{
		cout << "NU";
	}
	return 0;
}