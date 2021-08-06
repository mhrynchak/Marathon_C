#include "list.h"

void mx_pop_front(t_list **list) {
    t_list *tmp = *list;
    if (*list == NULL)
        return;
    else {
        *list = (*list)->next;
        free(tmp);
    }
}
