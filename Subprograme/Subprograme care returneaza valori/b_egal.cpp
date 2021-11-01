int Egal(int n){
	int c = n, a, b, d, e = 0, f = 0;
	a = c % 10;
	while(c > 0){
		a = c % 10;
		if(a % 2 != 0){
			b = c % 10;
			if(b == d){
				e++;
			}
			f++;
			d = b;
		}
		c /= 10;
	}
	if(e == f - 1){
		return 1;
	}
	else{
		return 0;
	}
}