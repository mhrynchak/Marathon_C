int mx_factorial_rec(int n)
{
	if (!n || n > 12 || n < 0)
                return 0;
	if (n > 1)
		return n * mx_factorial_rec(n-1);
	else
		return 1;
}

