#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n, a = 0, b = 0; cin >> n;
	for(int i = 1; i<=n; i++){
		if(n % i == 0){
			a += i;
			b++;
		}
	}
	cout << fixed << setprecision(2) << (float) a / b;
	return 0;
}