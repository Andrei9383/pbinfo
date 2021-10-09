#include <iostream>

using namespace std;

int main(){
	int n, v[1001]; cin >> n;
	for(int i = 1; i<=n; i++) cin >> v[i];
	bool a = false;
	int b = 0, c = 0;
	for(int i = 1; i<=n; i++){
		if(!a){
			c++;
			cout << v[c] << " ";
			a = !a;
		}
		else{
			cout <<	v[n - b] << " ";
			b++;
			a = !a;
		}
	}
	return 0;
}