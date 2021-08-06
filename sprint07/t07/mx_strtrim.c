// #include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool mx_isspace(char c);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strtrim(const char* str)
{
	if (!str)
		return NULL;

	int len = mx_strlen(str), beg = 0, end = 0;
	int i = len - 1;

	while (mx_isspace(str[i])) {
		i--;
		end++;
	}

	while (mx_isspace(str[beg]))
		beg++;

	char* new = mx_strnew(len - end - beg);
	new = mx_strncpy(new, (str + beg), len - end - beg);
	
	if (new)
		return new;
	return NULL;
}

// int main (void)
// {	
// 	char* name = "\f   My name... is Neo   \t\n ";
// 	char *res = mx_strtrim(name);
// 	printf ("res: %s\n", res);
// 	mx_strdel(&res);
// }

