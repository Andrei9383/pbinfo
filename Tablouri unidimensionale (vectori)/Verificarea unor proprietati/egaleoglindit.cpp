#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, v[101]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	int c = v[0], a = 0;
	while(c > 0){
		a = a * 10 + c % 10;
		c /= 10;
	}
	if(find(v, v + n, a) != v + n){
		cout << "DA";
	}
	else{
		cout << "NU";
	}
	return 0;
}