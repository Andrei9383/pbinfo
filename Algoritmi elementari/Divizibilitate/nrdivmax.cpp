#include <iostream>

using namespace std;

int main(){
	int n, max = -1, a = 0, b = 0; cin >> n;
	for(int i = 1; i<=n; i++){
		int a = 0;
		for(int j = 1; j * j<= i; j++){
			if(i % j == 0){
				a += 2;
			}
			if(j * j == i){
				a--;
			}
		}
		if(a > max){
			max = a;
			b = i;
		}
	}
	cout << b;
	return 0;
}