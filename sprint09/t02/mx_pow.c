double mx_pow(double n, unsigned int pow) {
	double s = 1;

    if (!pow) return 1;
	for (int i = 0; i < pow; i++)
		s *= n;
	return s;
}
