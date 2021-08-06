#include <stdio.h>
#include <stdbool.h>

// bool equal_nums(int a, int b) {
//     return a == b;
// }

int mx_comparator(const int *arr, int size, int x, bool(*compare)(int, int)) {
    if (!arr || size <= 0)
        return -1;
    for (int i = 0; i < size; i++)
        if (compare(arr[i], x))
            return i;
    return -1;
}

// int main(void) {
//     int arr[] = {1, 234, 43, 56, 98, 55, 77};
//     int i = mx_comparator(arr, sizeof(arr), 125, equal_nums);
//     printf("i: %d\n", i);
// }


