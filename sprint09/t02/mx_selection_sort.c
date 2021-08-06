int mx_strlen(const char *s);

int mx_strcmp(const char* s1, const char* s2);

void mx_swap(char **a, char **b);

int mx_selection_sort(char **arr, int size)
{
    int min_idx, k = 0;

    for (int i = 0; i < size - 1; i++)
    {
        min_idx = i;

        for (int j = i + 1; j < size; j++)
        {
            if (mx_strlen(arr[j]) < mx_strlen(arr[min_idx])) {
                    min_idx = j;
                } else if (mx_strlen(arr[j]) == mx_strlen(arr[min_idx])) {
                    if (mx_strcmp(arr[j], arr[min_idx]) < 0) {
                        min_idx = j;
                    }
            }
        }
        if (&arr[min_idx] != &arr[i]) {
            mx_swap(&arr[min_idx], &arr[i]);
            k++;
        }
    }

    return k;
}
