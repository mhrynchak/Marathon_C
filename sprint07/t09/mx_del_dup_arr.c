// #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size)
{
    if (!src)
        return NULL;
    bool dup = false;
    int new[src_size];
    int n = 0;
    for (int i = 0; i < src_size; i++)
    {
        dup = false;
        for (int j = 0; j <= i - 1; j++)
        {
            if (src[i] == src[j] && i != j) {
                dup = true;
                break;
            }
        }
        if (!dup) {
            new[n] = src[i];
            n++;
        }
    }
    *dst_size = n;
    if (new != NULL)
        return mx_copy_int_arr(new, *dst_size);
    return NULL;
}

// int main(void)
// {
//     int arr1[] = {1, 2, 2, 8, 4, 6, 8, 9, -4, 3, 4};
//     int new_size;
//     int *arr_new = mx_del_dup_arr(arr1, 11, &new_size);

//     printf("new array: ");

//     for (int i = 0; i < new_size; i++)
//         printf("%d ", arr_new[i]);
//     printf("\n");
// }

