#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int m, n, v[100001], a = 0; cin >> m >> n;
	for(int i = 0; i<m * n; i++) cin >> v[i];
	int max = *max_element(v, v + m * n);
	cout << max << " ";
	for(int i = 0; i<m * n; i = i + n){
		for(int j = i; j< i + n; j++){
			if(v[j] == max){
				a++;
				break;
			}
		}
	}
	cout << a;
	return 0;
}