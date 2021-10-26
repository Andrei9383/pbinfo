#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	int n, v[1001]; cin >> n;
	for(int i = 0; i<n; i++) cin >> v[i];
	for(int i = 0; i<n - 1; i++){
		if((float)sqrt(v[i]) == (int)sqrt(v[i])){
			for(int j = i + 1; j<n; j++){
				if((float)sqrt(v[j]) == (int)sqrt(v[j])){
					if(v[i] > v[j]) swap(v[i], v[j]);
				}
			}
		}
	}
	for(int i = 0; i<n; i++) cout << v[i] << " ";
	return 0;
}