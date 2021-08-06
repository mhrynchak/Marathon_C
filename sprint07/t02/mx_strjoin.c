// #include <stdio.h>
#include <stdlib.h>

int mx_strlen(const char *s);

char* mx_strcpy(char* dst, const char* src);

char* mx_strcat(char* s1, const char* s2);

char *mx_strnew(const int size);

char *mx_strdup(const char *str);

char *mx_strjoin(char const *s1, char const *s2)
{
    if (!s1)
        return mx_strdup(s2);
    else if(!s2)
        return mx_strdup(s1);

    char *res = mx_strnew(mx_strlen(s1) + mx_strlen(s2));

    if(!res)
        return NULL;

    mx_strcat(res, s1);
    mx_strcat(res, s2);

    if (res)
        return res;

    return NULL;
}

// int main(void)
// {
//     char *str1 = "this";
//     char *str2 = "dodge ";
//     char *str3 = NULL;
//     char *res = mx_strjoin(str2, str1); //returns "dodge this"
//     printf("first result: %s\n\n", res);
//     res = mx_strjoin(str1, str3); //returns "this"
//     printf("second result: %s\n\n", res);
//     // printf("null string: %s\n", str3);
//     res = mx_strjoin(str3, str3); //returns NULL
//     printf("third result: %s\n", res);
// }


