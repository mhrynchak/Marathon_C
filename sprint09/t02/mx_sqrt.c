int mx_sqrt(int x) {	
	for (int i = 0; i * i <= x; i++)
		if (i * i == x)
			return x;
	return 0;
}
