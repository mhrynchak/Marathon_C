#include <stdlib.h>

void mx_strdel(char **str) {
    free(*str);
    *str = NULL;
}

// int main(void)
// {
//     char *str = mx_strnew(3);
//     strcat(str, "hey");
//     printf("start: %s\n", str);
//     mx_strdel(&str);
//     printf("res: %s\n", str);
// }

