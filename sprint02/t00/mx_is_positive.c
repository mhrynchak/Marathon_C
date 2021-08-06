void mx_printstr(const char *s);

void mx_is_positive(int i)
{
	char* pos = "positive\n";
	char* neg = "negative\n";
	char* zero = "zero\n";
	
	if(i > 0)
	{
		mx_printstr(pos);
	}
	
	else if (i < 0)
	{
		mx_printstr(neg);
	}
	
	else
	{
		mx_printstr(zero);
	}
}

