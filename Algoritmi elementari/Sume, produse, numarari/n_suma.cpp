#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream cin("n_suma.in");
	ofstream cout("n_suma.out");
	int n, s = 0; cin >> n;
	for(int i = 0; i<n; i++){
		int x; cin >> x;
		s += x;
	}
	cout << s;
	return 0;
}