int concat(int a, int b){
	int c = b, d = 0;
	while(c > 0){
		d++;
		c /= 10;
	}
	int p = 1;
	for(int i = 1; i<=d; i++){
		p = p * 10;
	}
	return a * p + b;
}