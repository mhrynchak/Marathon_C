#include "list.h"
#include "minilibmx.h"

void func(t_list *node) {
    printf("data: %s for each\n", (char*)node->data);
}

int main (void) {
    t_list *test = NULL;
    mx_push_back(&test, "track 1");
    mx_push_back(&test, "track 2");
    mx_push_back(&test, "track 3");
    mx_push_back(&test, "track 4");

    display(&test);
    mx_printstr("\nfor each:\n");
    mx_foreach_list(test, func);
}
