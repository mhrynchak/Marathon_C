#include "list.h"
#include "minilibmx.h"

int main (void) {
    t_list *test = NULL;

    mx_pop_back(&test);
    mx_push_back(&test, "track 1");
    mx_push_back(&test, "track 2");
    mx_push_back(&test, "track 3");
    mx_push_back(&test, "track 4");

    display(&test);
    while (test)
        mx_pop_back(&test);
    mx_printstr("after pop:\n");
    display(&test);
}
