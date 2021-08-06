#pragma once
#include "agent.h"

t_agent *mx_create_agent(char *name, int power, int strength);

int mx_strlen(const char *s);
char *mx_strcpy(char* dst, const char* src);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
void mx_strdel(char **str);
