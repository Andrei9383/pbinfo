int fact(int n){
	int p = 1;
	if(n == 0){
		return 1;
	}
	else{
		for(int i = 1; i<=n; i++){
			p *= i;
		}
	}
	return p;
}