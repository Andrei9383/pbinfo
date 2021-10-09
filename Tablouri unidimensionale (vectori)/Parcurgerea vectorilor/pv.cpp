#include <iostream>

using namespace std;

int main(){
	int n, v[101], s = 0, s2 = 0, a = 0, s3 = 0; cin >> n;
	for(int i = 1; i<=n; i++){
		cin >> v[i];
		if(v[i] % 2 == 0){
			s += v[i];
		}
		if(i % 2 == 0){
			s2 += v[i];
		}
		if(v[i] % 10 == 0){
			a++;
		}
		if(v[i] % 3 == 0 && i % 2 != 0){
			s3 += v[i];
		}
	}
	for(int i = n; i>=1; i--){
		cout << v[i] << " ";
	}
	cout << endl << s << endl << s2 << endl << a << endl << s3 << endl;
	return 0;
}
