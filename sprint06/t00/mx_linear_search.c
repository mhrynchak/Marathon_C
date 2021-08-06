#include <stddef.h>
#include <stdio.h>

int mx_strcmp(const char* s1, const char* s2);

int mx_linear_search(char **arr, const char*s)
{
	for (int i = 0; arr[i]; i++)
	{
		// printf("it %d\n", i);
		if (!mx_strcmp(arr[i], s))
			return i;
		// printf("strcmp\n");
	}

	return -1;
}

// int main(void)
// {
// 	char *words[] = {"Free", "your", "mind.", NULL};
// 	int i = mx_linear_search(words, "h.");
// 	printf("%d\n", i);
// }