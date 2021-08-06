#include "hex_to_nbr.h"
#include <stdio.h>

double mx_pow(double n, unsigned int pow) {
	double s = 1;
	for (unsigned int i = 0; i < pow; i++)
		s *= n;
	return s;
}

int mx_strlen(const char *s) {
	int len = 0;
	for (int i = 0; s[i]; i++)
		len++;
	return len;
}

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long dec = 0;
    int tmp, len = mx_strlen(hex) - 1;

    for(int i = 0; hex[i]; i++, len--) {
        if(mx_isdigit(hex[i]))
            tmp = hex[i] - 48;
        else if(mx_islower(hex[i]))
            tmp = hex[i] - 97 + 10;
        else if(mx_isupper(hex[i]))
            tmp = hex[i] - 65 + 10;
        dec += tmp * mx_pow(16, len);
    }

    return dec;
}

// int main(void) {
//     unsigned long dec = mx_hex_to_nbr("ffffffffffff");
//     printf("dec: %ld\n", dec);
// }
