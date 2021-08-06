// #include <stdio.h>
#include <stdlib.h>

void mx_strdel(char **str);

int mx_strlen(const char *s);

char *mx_strcpy(char* dst, const char* src);

char *mx_strcat(char* s1, const char* s2);

char *mx_strnew(const int size);

char *mx_strdup(const char *str);

char *mx_strjoin(char const *s1, char const *s2);

char *mx_concat_words(char **words)
{
    if (!words)
        return NULL;
    
    char *res, *new, *tmp;
    
    for (int i = 0; words[i]; i++)
    {
        new = mx_strdup(words[i]);

        if (i > 0) {
            tmp = mx_strjoin(res, " ");
            mx_strdel(&res);
            res = tmp;
        }

        tmp = mx_strjoin(res, new);
        mx_strdel(&res);
        res = tmp;

        mx_strdel(&new);
    }

    if (res)
        return res;
    return NULL;
}

// int main(void)
// {
//     char *words[] = {"Free", "your", "mind.", NULL};
//     char *res;
//     res = mx_concat_words(words); //returns "Free your mind."
//     printf("1 res: %s\n\n", res);
//     free(res);
//     res = mx_concat_words(NULL); //returns NULL
//     printf("2 res: %s\n", res);
//     free(res);
// }

