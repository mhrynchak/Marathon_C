#include <unistd.h>

void mx_printchar(char c);

void mx_only_printable()
{
	for (int i = 126; i > 31; i--)
	{
		mx_printchar(i);

	}
}

