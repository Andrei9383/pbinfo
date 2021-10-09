#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
	ifstream cin("maxim4.in");
	ofstream cout("maxim4.out");
	int n, v[101]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	cout << *max_element(v, v + n) << " " << count(v, v + n, *max_element(v, v + n));
	return 0;
}