#include "list.h"
#include "minilibmx.h"

int main (void) {
    t_list *test = NULL;
    
    printf("size: %d\n", mx_list_size(test));
    mx_push_back(&test, "track 1");
    mx_push_back(&test, "track 2");
    mx_push_back(&test, "track 3");
    mx_push_back(&test, "track 4");

    display(&test);
    printf("size: %d\n", mx_list_size(test));
    mx_pop_front(&test);
    mx_printstr("after pop:\n");
    display(&test);
    printf("size: %d\n", mx_list_size(test));
}
