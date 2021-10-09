#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream cin("numere2.in");
	ofstream cout("numere2.out");
	int n, v[25001], a = 0; cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> v[i];
		if(v[i] == v[i - 1]){
			a++;
			n -= 2;
			i -= 2;
		}
	}
	cout << a << endl;
	for(int i = 1; i<=n; i++){
		cout << v[i] << " ";
	}
	return 0;
}