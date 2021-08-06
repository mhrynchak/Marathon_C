#include <stdlib.h>

void mx_printchar(int c);

/*int main(void)
{
	int n = 3, i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
			mx_printchar(' ');
		for (j = 1; j <= n; j++)
		{
			if ((i == 1 || i == n) && (j == 1 || j == n))
                                mx_printchar('+');
			if ((i == 1 && (j > 1 && j < n)) || (i == n && (j > 1 && j < n)))
				mx_printchar('-');
			else
				mx_printchar(' ');
		}
		mx_printchar('\n');
	}
}*/

int main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	
	//defining size of our cube
	int n = atoi(argv[1]);
	int l = n + n / 2 + 3;
	int w = 2 * n + n / 2 + 3;

	//printing that shit
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < w; j++)
		{	
			mx_printchar('*');
		}

		mx_printchar('\n');
	}

	return 0;
}

