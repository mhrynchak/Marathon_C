#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <errno.h>
#include "list.h"

void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printerr(const char *s);
void display(t_list **list);
int mx_strcmp(const char* s1, const char* s2);
