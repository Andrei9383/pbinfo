#include <iostream>
#include <algorithm>

using namespace std;

bool a(int i){
	int a =0;
	while(i > 0){
		a++;
		i /= 10;
	}
	return a % 2 == 0;
}

int main(){
	int n, v[101]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	if(all_of(v, v + n, a)){
		cout << "DA";
	}
	else{
		cout << "NU";
	}
	return 0;
}