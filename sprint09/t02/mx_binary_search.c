int mx_strcmp(const char* s1, const char* s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int left = 0, right = size - 1;
    
    while (left <= right) {
        *count =  left + (right - left) / 2;

        if (!mx_strcmp(arr[*count], s))
            return *count;

        if (mx_strcmp(arr[*count], s) < 0)
            left = *count + 1;

        else
            right = *count - 1;
    }

    return -1;
}
