#include "get_address.h"
#include <stddef.h>

char *mx_nbr_to_hex(unsigned long nbr) {
    unsigned long rem;
    int j = 0;
    char ch[16];
    char *hex = NULL;

    while (nbr != 0) {
        rem = nbr % 16;
        if (rem < 10)
            ch[j++] = 48 + rem;
        else
            ch[j++] = 87 + rem;
        nbr /= 16;
    }
 
    hex = mx_strnew(j);

    for (int i = j - 1, k = 0; i >= 0; i--, k++) {
        hex[k] = ch[i];
    }

    if(hex)
        return hex;
    return 0;
}

// int main(void)
// {
//     char *hexnum = mx_nbr_to_hex(-52);
//     printf("%s\n", hexnum);
//     mx_strdel(&hexnum);
// }
