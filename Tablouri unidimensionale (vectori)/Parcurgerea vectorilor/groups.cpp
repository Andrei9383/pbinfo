#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	int a[100001], b[100001], c = 0, d = 0;
	bool e = false;
	int cnt = 0;
	if(n % 2 == 0){
		for(int i = 2; i<=n + 1; i++){
			b[1] = 1;
			if(!e){
				a[++c] = i;
				cnt++;
				if(cnt == 2){
					cnt = 0;
					e = !e;
				}
			}
			else{
				b[++d + 1] = i;
				cnt++;
				if(cnt == 2){
					cnt = 0;
					e = !e;
				}
			}
		}
	}
	else{
		e = false;
		for(int i = 1; i<=n; i++){
			if(!e){
				a[++c] = i;
				cnt++;
				if(cnt == 2){
					cnt = 0;
					e = !e;
				}
			}
			else{
				b[++d] = i;
				cnt++;
				if(cnt == 2){
					cnt = 0;
					e = !e;
				}
			}
		}
	}
	for(int i = 1; i<=c; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	for(int i = 1; i<=d; i++){
		cout << b[i] << " ";
	}
	return 0;
}