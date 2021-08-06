#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_prime(int n);

bool mx_is_mersenne(int n)
{
	int flag = 0;
	int k = 1;

	while(mx_is_prime(n) && mx_pow(2, k) <= n + 1)
	{
		if (n == mx_pow(2, k) - 1)
		{
			flag = 1;
			break;	
		}
		k++;
	}

	return flag;
}

