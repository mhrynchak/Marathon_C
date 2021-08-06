int mx_factorial_iter(int n)
{
	int s = 1;

	if (!n || n > 12 || n < 0)
		return 0;

	for (int i = 1; i <= n; i++)
		s *= i;

	return s;
}

