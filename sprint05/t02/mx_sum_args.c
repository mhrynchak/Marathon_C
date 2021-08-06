#include <stdbool.h>

void mx_printchar(char c);

void mx_printint(int n);

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str);

bool is_sign(char c)
{
        return c == '-' || c == '+';
}

bool is_valid(char *argv)
{
	if (!mx_isdigit(argv[0]) && !is_sign(argv[0]))
		return false;

	for (int j = 1; argv[j]; j++)
		if(!mx_isdigit(argv[j]))
			return false;
	
	return true;
}

int main(int argc, char **argv)
{
	int s = 0;

	for (int i = 1; i < argc; i++)
	{
		if (is_valid(argv[i]))
			s += mx_atoi(argv[i]);
	}

	mx_printint(s);
	mx_printchar('\n');

	return 0;
}

