// #include <stdio.h>
// #include <string.h>
#include <stdlib.h>
// char *strdup(const char *s);

int mx_strlen(const char *s);

char* mx_strcpy(char* dst, const char* src);

char *mx_strnew(const int size);

char *mx_strdup(const char *str)
{
    if (str == NULL)
        return NULL;
    
    size_t len = mx_strlen(str) + 1;
    char *new = mx_strnew(len);

    if (new == NULL)
        return NULL;
    
    return mx_strcpy(new, str);
}

// int main(void)
// {
//     char *str = NULL;
//     char *p = mx_strdup(str);
//     printf("%p", p);
// }
