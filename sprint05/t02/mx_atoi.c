#include <stdbool.h>
#include <limits.h>

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str)
{
	int sign = 1, base = 0, extra = 0;

	while (mx_isspace(*str)) {
		str++;
	}

	if (*str == '-') {
		sign = -1;
		str++;
	}

	else if (*str == '+') {
		str++;
	}

	while (mx_isdigit(*str)) {
		if (base > INT_MAX / 10 || (base == INT_MAX / 10 && *str - '0' > 7)) {
			extra = 10 * extra + (*str++ - '0');
		}
		base = 10 * base + (*str++ - '0');
	}
	
	if (extra > 0) {
		return (base + extra) * sign;
	}

	else {
		return base * sign;
	}
}

