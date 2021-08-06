#ifndef HEADER
#define HEADER
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strcat(char* s1, const char* s2);
char *mx_file_to_str(const char *filename);
char *mx_strcpy(char* dst, const char* src);
char *mx_strjoin(char const *s1, char const *s2);
#endif