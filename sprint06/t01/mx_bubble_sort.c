int mx_strcmp(const char* s1, const char* s2);

int mx_bubble_sort(char **arr, int size)
{
	int k = 0;
	char *t;

        for (int i = 1; i < size; i++)
        {
		for (int j = 0; j < size - 1; j++)
                {	
			if (mx_strcmp(arr[j], arr[j+1]) > 0) {
                                t = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = t;
                                k++;
		}	}
        }

        return k;
}
