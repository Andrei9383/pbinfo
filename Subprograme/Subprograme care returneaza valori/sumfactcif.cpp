int sumfactcif(int n){
	int s = 0;
	if(n == 0){
		return 1;
	}
	else{
		int c = n, p = 1;
		while(c > 0){
			for(int i = 1; i<=c % 10; i++){
				p *= i;
			}
			s += p;
			c /= 10;
			p = 1;
		}
	}
	return s;
}
