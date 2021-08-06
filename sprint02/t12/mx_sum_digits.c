int mx_sum_digits(int num)
{
	int s = 0;

	if (num < 0)
	{
		num = -num;
	}

	while (num)
	{
		s += num % 10;
		num /= 10;
	}

	return s;
}

