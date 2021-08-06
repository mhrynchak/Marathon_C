#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num)
{
	int tmp = num;
	int sum = 0;
	int p = 0;

	while(tmp > 0) { tmp /= 10; p++; }

	tmp = num;

	while(tmp > 0) { sum += mx_pow(tmp % 10, p); tmp /= 10; }

	return num == sum;
}

