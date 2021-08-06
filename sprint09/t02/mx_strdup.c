#include <stdlib.h>

int mx_strlen(const char *s);
char* mx_strcpy(char* dst, const char* src);
char *mx_strnew(const int size);
char *mx_strdup(const char *str) {
    size_t len = 0;
    char *new = NULL;

    if (str == NULL)
        return NULL;
    
    len = mx_strlen(str);
    new = mx_strnew(len);

    if (new == NULL)
        return NULL;
    
    return mx_strcpy(new, str);
}
