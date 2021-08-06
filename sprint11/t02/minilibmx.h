#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <errno.h>

void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
void mx_printerr(const char *s);
