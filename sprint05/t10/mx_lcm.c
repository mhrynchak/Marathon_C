#include <limits.h>

int mx_gcd(int a, int b);

int mx_lcm(int a, int b)
{
	int lcm;
	
	if (a < 0)
		a *= -1;
	
	if (b < 0)
		b*= -1;

	lcm = (a / mx_gcd(a, b)) * b;
	
	if (lcm < INT_MAX)	
		return lcm;
	
	else
		return 0;
}

