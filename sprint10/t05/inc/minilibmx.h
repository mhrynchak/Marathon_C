#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include "agent.h"
#include "file_to_str.h"

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
void mx_strdel(char **str);
void mx_printstr(const char *s);
int mx_strcmp(const char* s1, const char* s2);
char *mx_strcpy(char* dst, const char* src);
char *mx_strncpy(char *dst, const char *src, int len);
void mx_printerr(const char *s);
char *mx_strnew(const int size);
int mx_bubble_sort(char **arr, int size);
char *mx_strndup(const char *str, size_t len);
void mx_exterminate_agents(t_agent ***agents);
t_agent *mx_create_agent(char *name, int power, int strength);
