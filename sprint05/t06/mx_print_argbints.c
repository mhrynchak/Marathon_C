#include <stdbool.h>
#include <stdio.h>
#include <limits.h>

void mx_printchar(char c);

void mx_printint(int n);

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str);

void print_binary(int n)
{
	int binaryNum[32], i = 0, j = 0, negative = 0;

	if (n < 0)
		negative = 1;

	for (; j < 32; j++)
	{
		binaryNum[j] = 0;
	}

	if (n == INT_MIN) {
                binaryNum[31] = 1;
		for (j = 31; j >= 0; j--)
			mx_printint(binaryNum[j]);
		return;
        }

	while (n > 0) {
		binaryNum[i] = n % 2;
		n /= 2;
		i++;
	}

	if (negative) {
		for (int k = 0; k < 32; k++)
		{
			if(binaryNum[k])
				binaryNum[k] = 0;
			else
				binaryNum[k] = 1;
		}

		for (; i >= 0; i--)
		{
			if(binaryNum[i])
				binaryNum[i] = 0;
			else
				binaryNum[i] = 1;
		}
	}
	
	for (j = 31; j >= 0; j--)
		mx_printint(binaryNum[j]);
}

int main(int argc, char **argv)
{
	int tmp;

	for (int i = 1; i < argc; i++)
	{
		tmp = mx_atoi(argv[i]);
		print_binary(tmp);	
		mx_printchar('\n');
	}

	return 0;
}

