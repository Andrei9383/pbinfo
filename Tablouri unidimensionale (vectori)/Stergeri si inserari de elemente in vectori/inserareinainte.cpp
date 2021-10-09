#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n, v[101]; cin >> n;
	for(int i = 1; i<=n; i++) cin >> v[i];
	for(int i = 1; i<=n; i++){
		if((float)sqrt(v[i]) == (int)sqrt(v[i])){
			for(int j = n; j>=i; j--){
				v[j + 1] = v[j];
			}
			v[i] = sqrt(v[i]);
			++n;
			++i;
		} 
	}
	for(int i = 1; i<=n; i++) cout << v[i] << " ";
	return 0;
}