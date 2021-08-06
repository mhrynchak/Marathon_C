#pragma once
int mx_atoi(const char *str);
int mx_strcmp(const char* s1, const char* s2);
int mx_binary_search(char **arr, int size, const char *s, int *count);
int mx_bubble_sort(char **arr, int size);
int mx_count_words(const char *str, char delimiter);
int mx_insertion_sort(char **arr, int size);
int mx_linear_search(char **arr, const char*s);
double mx_pow(double n, unsigned int pow);
void mx_printint(int n);
void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_swap(char **a, char **b);
int mx_selection_sort(char **arr, int size);
int mx_sqrt(int x);
char* mx_strcat(char* s1, const char* s2);
void mx_strdel(char **str);
char* mx_strcpy(char* dst, const char* src);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strjoin(char const *s1, char const *s2);
int mx_strncmp(const char* s1, const char* s2, int n);
int mx_tolower(int c);
int mx_toupper(int c);
