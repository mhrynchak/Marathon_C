#include <stdbool.h>
#include <stdlib.h>
// #include <stdio.h>

bool mx_isspace(char c);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strtrim(const char* str);
char *mx_strncpy(char *dst, const char *src, int len);

char *mx_del_extra_whitespaces(const char *str)
{
    if (!str)
        return NULL;

    char *cut = mx_strtrim(str);
    char *res;
    int len = 0, spaces = 0;

    for (int i = 0; cut[i]; i++)
    {
        if(mx_isspace(cut[i]))
            spaces++;
        while(mx_isspace(cut[i]))
            i++;
        len++;
    }

    res = mx_strnew(spaces + len);

    for (int i = 0, j = 0; cut[i]; j++)
    {
        res[j] = cut[i];

        if(!mx_isspace(cut[i]))
            i++;

        else {
            while(mx_isspace(cut[i]))
            i++;
        }
    }

    mx_strdel(&cut);

    if(res)
        return res;
    return NULL;
}

// int main(void)
// {
//     char *name = "\f  My name...   is   \r Neo   \t\n";
//     char *res = mx_del_extra_whitespaces(name); //returns "My name... is Neo"
//
//     printf("res: %s\n", res);
//
//     mx_strdel(&res);
// }

