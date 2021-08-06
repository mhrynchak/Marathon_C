#include <unistd.h>

void mx_printchar(char c);

void mx_printstr(const char *s);

int main(int argc, char **argv) {
	mx_printint(argc);
	mx_printchar('\n');

	for (int i = 1; i < argc; i++) {
		mx_printstr(argv[i]);
		mx_printchar('\n');
	}
	return 0;
}
