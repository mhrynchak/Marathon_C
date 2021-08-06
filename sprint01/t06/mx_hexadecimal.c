#include <unistd.h>

void mx_printchar(char c);

void mx_hexadecimal(void)
{
    for (int i = 32; i < 128; i++)
    {
        long quotient, remainder;
        int h, j = 0;
        char hexadecimalnum[100];

        quotient = i;

        while (quotient != 0)
        {
            remainder = quotient % 16;
            if (remainder < 10)
                hexadecimalnum[j++] = 48 + remainder;
            else
                hexadecimalnum[j++] = 55 + remainder;
            quotient = quotient / 16;
        }

        for (h = j; h >= 0; h--)
            mx_printchar(hexadecimalnum[h]);
        write(1, "\n", 1);
    }
}

