#include "list.h"

void mx_swap(t_list *a, t_list *b) {
    char *temp = a->data;
    a->data = b->data;
    b->data = temp;
}

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void*b)) {
    t_list *current = list;
    t_list *next_node = list->next;
    while (current) {
        next_node = current->next;
        while (next_node) {
            if (cmp(current->data, next_node->data))
                mx_swap(current, next_node);
            next_node = next_node->next;
        }
        current = current->next;
    }
    return current;
}
