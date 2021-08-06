void mx_swap_char(char* s1, char* s2);

int mx_strlen(const char *s);

void mx_str_reverse(char *s)
{
	int i = mx_strlen(s) - 1;
	int it = i/2;
	for(int j = 0; j < it; j++)
	{
		mx_swap_char(&s[i], &s[j]);
		i--;
	}
}

