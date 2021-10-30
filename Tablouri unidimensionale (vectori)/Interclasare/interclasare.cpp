#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int main(){
	ifstream cin("interclasare.in");
	ofstream cout("interclasare.out");
	int64_t n, m;
	int a[100001], b[100001], c[200001];; cin >> n;
	for(int i = 0; i<n; i++) cin >> a[i];
	cin >> m;
	for(int i = 0; i<m; i++) cin >> b[i];
	merge(a, a + n, b, b + m, c);
	int d = 0;
	for(int i = 0; i<m + n; i++){
		cout << c[i] << " ";
		d++;
		if(d > 9){
			cout << endl;
			d = 0;
		}
	} 
	return 0;
}