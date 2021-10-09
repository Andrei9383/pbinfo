#include <iostream>
#include <algorithm>

using namespace std;



int main(){
	int n, v[1000]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	for(int i = 0; i<n; i++){
		int a = v[i];
		while(v[i] > 9 && v[i] % 10 < v[i]/10%10){
			v[i] /= 10;
		}
		if(v[i] == a || v[i] < 10){
			cout << 0 << endl;
			continue;
		}
		while(v[i] > 9 && v[i] % 10 > v[i]/10%10){
			v[i] /= 10;
		}
		if(v[i] > 9){
			cout << 0 << endl;
			continue;
		}
		cout << 1 << endl;
	}
	return 0;
}