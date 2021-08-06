#include <stdlib.h>
// #include <stdio.h>

int *mx_copy_int_arr(const int *src, int size)
{
    if (!src)
        return NULL;
    
    int *new = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++)
        new[i] = src[i];

    if (new)
        return new;
    
    return NULL;
}


// int main(void)
// {
//     int arr1[] = {1, 2, 3};
//     int *arr2 = NULL;
//     int *i = mx_copy_int_arr(arr1, 3); //returns array [1, 2, 3]
//     printf("first: %d\n", *i);
//     i = mx_copy_int_arr(arr2, 3); //returns NULL
//     printf("second: %ls\n", i);
// }

