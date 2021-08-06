int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size)
{
    int k = 0, i, j;
    char *key;

    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && mx_strlen(arr[j]) > mx_strlen(key)) {
                arr[j + 1] = arr[j];
                j = j - 1;
                k++;
            }
        arr[j + 1] = key;
    }

    return k;
}
