void mx_printchar(char c);

int mx_strlen(const char *s);

void mx_printstr(const char *s);

char *mx_strchr(const char *s, int c);

int main(int argc, char **argv)
{
	char *ptr;
	ptr = argv[0];

	if (argc < 0)
		return 0;

	while (mx_strchr(ptr, '/')) {
		ptr = mx_strchr(ptr, '/');
		ptr++;
	}

	mx_printstr(ptr);
	mx_printchar('\n');

	return 0;
}

