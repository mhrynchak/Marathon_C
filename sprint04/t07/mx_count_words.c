int mx_count_words(const char *str, char delimiter)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] != delimiter) {
		count++;
		}

		while (str[i] != delimiter && str[i] != '\0') {
			i++;
		}

		if (str[i] == delimiter)
		{
			i++;
		}
	}

	return count;
}

