int cmmnr(int n){
	int c = n, v[1000], a = -1, f = 0;
	while(c > 0){
		v[++a] = c % 10;
		c /= 10;
	}
	for(int i = 0; i<=a - 1; i++){
		for(int j = i + 1; j<=a; j++){
			if(v[i] > v[j]){
				swap(v[i], v[j]);
			}
		}
	}
	for(int i = a; i>=0; i--){
		f = f * 10 + v[i];
	}
	return f;
}