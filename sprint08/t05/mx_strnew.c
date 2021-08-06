// #include <string.h>
#include <stdlib.h>

char *mx_strnew(const int size) {
    char *strnew = NULL;
    
    if (size > 0) {
        strnew = malloc(size + 1);
        for (int i = 0; i <= size; i++) {
            strnew[i] = '\0';
        }
        return strnew;   
    }
    return NULL;
}

// int main(void)
// {
//     char *str = mx_strnew(10);
//     if (str == NULL)
//     {
//         printf("failed\n");
//     }
//     else
//     {
//         printf("success\n");
//     }
// }
