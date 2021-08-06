#include <stddef.h>

int mx_strlen(const char *s);

int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strchr(const char *s, int c);

char *mx_strstr(const char *s1, const char *s2)
{
	int n = mx_strlen(s2);
	const char *start;
	start = s1;

	if (!s1) {
		return NULL;
	}

	else if (!s2) {
                return (char *)s1;
        }

	while (start) {
		if (!mx_strncmp(start, s2, n)) {
			return (char *) start;
		}
                start = mx_strchr(start + 1, s2[0]);
	}

	return NULL;
}

