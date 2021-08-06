// #include <stdio.h>
// #include <limits.h>
#include <time.h>

// void func () {
//     for (int i = 0; i < INT_MAX; i++)
//         ;;// printf ("%d\n ", i);
// }

double mx_timer(void(*f)()) {
    clock_t start, stop;
    
    start = clock();
    f();
    stop = clock();
    return (double)(stop - start) / CLOCKS_PER_SEC;
}

// int main(void) {
//     double i = mx_timer(func);
//     printf("execution time: %f seconds\n", i);
// }


