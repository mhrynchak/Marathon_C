#include <stdbool.h>

bool mx_is_prime(int num)
{
	int flag = 0;

	for (int i = 2; i <= num / 2; ++i) 
	{
		if (num % i == 0)
		{
			flag = 1;
			break;
		}
	}

	return !flag;
}

