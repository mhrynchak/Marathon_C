#include <stddef.h>
#include <stdio.h>

int mx_strcmp(const char* s1, const char* s2);

int mx_linear_search(char **arr, const char*s) {
	for (int i = 0; arr[i]; i++) {
		if (!mx_strcmp(arr[i], s))
			return i;
	}

	return -1;
}
