#include <iostream>

using namespace std;

int main(){
	int n, v[201]; cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> v[i];
	}
	int a =0, c1, c2;
	for(int i = 1; i<=n - 1 / 2; i++){
		for(int j = i + 1; j<=n; j++){
			c1 = v[i];
			c2 = v[j];
			while(c1 != c2){
				if(c1 > c2){
					c1 -= c2;
				}
				else{
					c2 -= c1;
				}
			}
			if(c1 == 1){
				a++;
			}
		}
	}
	cout << a;
	return 0;
}