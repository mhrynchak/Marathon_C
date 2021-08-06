#include "list.h"
#include "minilibmx.h"

void display(t_list **list) {
    t_list *tmp = *list;

    if (tmp == NULL) {
        mx_printerr("the list is empty\n");
        return;
    } else {
        while (tmp) {
            mx_printstr("data: ");
            mx_printstr((char *)tmp->data);
            mx_printchar('\n');
            tmp = tmp->next;
        }
    }
}
