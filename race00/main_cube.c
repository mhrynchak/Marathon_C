#include <stdlib.h>

void mx_cube(int n);

int main (int argc, char* argv[]) {
	if (argc > 0) {
		mx_cube(atoi(argv[1]));
	}
	else
		return 1;
}
