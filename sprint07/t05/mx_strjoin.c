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

// INT MAIN(VOID)
// {
//     CHAR *STR1 = "THIS";
//     CHAR *STR2 = "DODGE ";
//     CHAR *STR3 = NULL;
//     CHAR *RES = MX_STRJOIN(STR2, STR1); //RETURNS "DODGE THIS"
//     PRINTF("FIRST RESULT: %S\N\N", RES);
//     RES = MX_STRJOIN(STR1, STR3); //RETURNS "THIS"
//     PRINTF("SECOND RESULT: %S\N\N", RES);
//     // PRINTF("NULL STRING: %S\N", STR3);
//     RES = MX_STRJOIN(STR3, STR3); //RETURNS NULL
//     PRINTF("THIRD RESULT: %S\N", RES);
//


