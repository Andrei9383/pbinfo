#include <iostream>

using namespace std;

int main(){
	int n, v[101], a = 0; cin >> n;
	for(int i = 1; i<=n; i++) cin >> v[i];
		for(int i = 1; i<=n; i++){
			if(v[i] % 2 == 0){
				a++;
			}
		}
		if(a == n){
			cout << "DA";
		}
		else{
			cout <<"NU";
		}
		return 0;
}