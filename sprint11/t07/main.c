#include "list.h"
#include "minilibmx.h"

int main (void) {
    t_list *test = NULL;
    mx_pop_index(&test, 1);
    mx_push_back(&test, "track 1");
    mx_push_back(&test, "track 2");
    mx_push_back(&test, "track 3");
    mx_push_back(&test, "track 4");

    display(&test);
    mx_pop_index(&test, 1);

    mx_printstr("\nafter pop_at: \n\n");
    display(&test);
}
