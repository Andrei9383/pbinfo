#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
	ifstream cin("unice1.in");
	ofstream cout("unice1.out");
	int n, v[1001], a = 0; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	for(int i = 0; i<n; i++){
		if(count(v, v + n, v[i]) == 1){
			a++;
		}
	}
	cout << a;
	return 0;
}