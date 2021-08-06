#include <stddef.h>

int mx_strlen(const char *s);

int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strchr(const char *s, int c);

char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub)
{
	int count = 0;
	int sublen = mx_strlen(sub);
	const char *start = str;

	if (!str || !sub) {
		return -1;
	}
	
	if(!sublen) {
		return 0;
	}

	while (*start) {
		start = mx_strstr(start, sub);
		
		if (start) {
			start += sublen;
			count++;
		}
		
		else {
			break;
		}
	}
	
	return count;
}

