#include "list.h"
#include "minilibmx.h"

int main (void) {
    t_list *test = NULL;
    mx_push_back(&test, "track 1");
    mx_push_back(&test, "track 2");
    mx_push_back(&test, "track 3");
    mx_push_back(&test, "track 4");

    display(&test);
    mx_printchar('\n');
    mx_clear_list(&test);
    mx_printstr("\nafter clearing:\n");
    display(&test);
}
