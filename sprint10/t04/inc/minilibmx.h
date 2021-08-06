#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

bool mx_isalpha(int c);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int mx_strcmp(const char* s1, const char* s2);
char *mx_strcpy(char* dst, const char* src);
void mx_printerr(const char *s);
char *mx_strnew(const int size);
