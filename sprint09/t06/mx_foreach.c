#include <stdio.h>

// void mx_printint(int n) {
//     printf("%d  ", n);
// }

void mx_foreach(const int *arr, int size, void(*f)(int)) {
    for (int i = 0; i < size; i++) 
        f(arr[i]);
}

// int main(void) {
//     int arr[] = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 10};
//     mx_foreach(arr, 10, mx_printint);
//     printf("\n");
// }
