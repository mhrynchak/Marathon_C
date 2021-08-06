#include "list.h"
#include <stdio.h>

void mx_clear_list(t_list **list) {
    t_list *current = *list;
    t_list *next_node = NULL;
    if (current == NULL)
        return;
    while (current) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    *list = NULL;
}
