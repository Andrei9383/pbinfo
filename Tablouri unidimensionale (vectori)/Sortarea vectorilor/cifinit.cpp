#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, v[1001]; cin >> n;
	for(int i = 0; i<n; i++){
		cin >> v[i];
		while(v[i] > 9){
			v[i] /= 10;
		}	
	}
	sort(v, v + n);
	for(int i = 0; i<n; i++) cout << v[i];
	return 0;
}