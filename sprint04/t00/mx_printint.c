void mx_printchar(char c);

void mx_printint(int n)
{
	char ch[11];
	int i = 0, z = 0;

	if (n < 0)
	{
		n++;
		n = -n;
		z = 1;
	}
	
	if (!n)
	{ 
		mx_printchar(n + '0');
	}
	
	while (n > 0)  
	{
		ch[i] = n % 10 + '0';
		n /= 10;
		i++;
	}

	if (z)
	{
		ch[0]++; 
		ch[i] = '-';
	}

	for (int j = i; j >= 0; j--)
	{
		mx_printchar(ch[j]);
	}
}

