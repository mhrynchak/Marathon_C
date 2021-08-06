#include <stdlib.h>

int mx_count_words(const char *str, char delim);
char *mx_strncpy(char *dst, const char* src, int len);
char* mx_strnew(const int size);
void mx_strdel(char **str);

char **mx_strsplit(char const *s, char c){
    if (!s)
        return NULL;
    int words = mx_count_words(s, c), chars = 0;
    char **arr = (char **) malloc(sizeof(char*) * (words + 1));
    
    for (int i = 0; i < words; i++)
    {
        chars = 0;
        while (*s == c && *s)
            s++;
        while (*s != c && *s){
            chars++;
            s++;
        }
        arr[i] = malloc(sizeof(char) * (chars + 1));
        arr[i] = mx_strncpy(arr[i], s - chars, chars);
        arr[i][chars] = '\0';
    }
        arr[words] = NULL;
    
    if(arr)
        return arr;
    return NULL;
}

// #include <stdio.h>
// int main (void)
// {
//     char *s = "**Good bye,**Mr.*Anderson.****";
//     //*s = "Knock, knock,    Neo.   ";
// // arr = ["Good bye,", "Mr.", "Anderson."]
//     char c = '*';
//     char **arr = mx_strsplit(s, c);
//     int i = 0;
    
//     for (; arr[i]; i++)
//         printf("%s\n", arr[i]);
    
//     for (; i >= 0; i--)
//         mx_strdel(&arr[i]);
//     free(arr);
// // *s = "**Good bye,**Mr.*Anderson.****";
// // arr = mx_strsplit(s, ' ' );	// arr = ["Knock,", "knock,", "Neo."]
// }

