#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n; cin >> n;
	int a = 2 * n - 1;
	while(n--){
		cout << a << " ";
		a -= 2;
	}
	return 0;
}