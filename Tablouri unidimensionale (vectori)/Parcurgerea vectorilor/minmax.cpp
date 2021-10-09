#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
	ifstream cin("minmax.in");
	ofstream cout("minmax.out");
	int n, v[1001]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	cout << *min_element(v, v + n) << " " << *max_element(v, v + n);
	return 0;
}