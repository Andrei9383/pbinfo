#include <iostream>
#include <algorithm>
#include <fstream>
#include <math.h>

using namespace std;

bool prim(int i){
	if(i < 2) return false;
	for(int d = 2; d<=sqrt(i); d++){
		if(i % d == 0){
			return false;
		}
	}
	return true;
}

int main(){
	ifstream cin("nrapprime.in");
	ofstream cout("nrapprime.out");
	int n, v[101]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	cout << count_if(v, v + n, prim);
	return 0;
}