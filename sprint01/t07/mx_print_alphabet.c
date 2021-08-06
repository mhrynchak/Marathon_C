#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet(void) {
	int j = 98;

	for(int i = 65; i < 90; i += 2) {
		mx_printchar(i);
		mx_printchar(j);
		j += 2;
	}
}

