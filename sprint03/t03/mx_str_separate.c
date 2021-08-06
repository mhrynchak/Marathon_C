#include <unistd.h>

void mx_printchar(char c);

void mx_str_separate(const char* str, char delim)
{
	while (*str)
	{
		if (*str == delim)
			mx_printchar('\n');
		while (*str == delim)
			str++;
		mx_printchar(*str);
		str++;
	}
}

