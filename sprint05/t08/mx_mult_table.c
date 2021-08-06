#include <stdbool.h>

int mx_strlen(const char *s);

void mx_printchar(char c);

void mx_printint(int n);

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str);

bool is_valid(int argc, char *arg1, char *arg2)
{
        if (argc != 3 || mx_atoi(arg1) < 0 || mx_atoi(arg2) < 0 || mx_atoi(arg1) > 9 || mx_atoi(arg2) > 9)
                return false;
        for (int j = 1; arg1[j]; j++)
                if(!mx_isdigit(arg2[j]))
                        return false;
	for (int j = 1; arg2[j]; j++)
                if(!mx_isdigit(arg2[j]))
                        return false;
        return true;
}

int main(int argc, char **argv)
{
	int m = mx_atoi(argv[1]);
	int n = mx_atoi(argv[2]);
	int t;

	if (!is_valid(argc, argv[1], argv[2]))
		return 0;

	if (m > n) {
		t = n;
		n = m;
		m = t;
	}

	for (int i = m; i <= n; i++)
	{	
		for (int j = m; j <= n; j++)
		{
			mx_printint(i*j);
			if (j < n)
				mx_printchar('\t');
		}
		mx_printchar('\n');
	}

	return 0;
}

