#include "list.h"
#include "minilibmx.h"

void display(t_list **list) {
    if (*list == NULL) {
        mx_printerr("the list is empty\n");
        return;
    } else {
        while (*list) {
            mx_printstr("data: ");
            mx_printstr((char *)(*list)->data);
            mx_printchar('\n');
            *list = (*list)->next;
        }
    }
}
