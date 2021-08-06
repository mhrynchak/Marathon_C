#include "list.h"
#include <stdio.h>
void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) {
    t_list *current = *list, *prev;
    int i = 0;
    prev = current;
    while (current) {
        printf("it %d\nptr: %p\n", i, (void *)current->next);
        if(cmp(current->data, del_data)) {
            printf("found: %s\n", (char*)current->data);
            prev->next = current->next;
            free(current);
        }
        prev = current;
        current = current->next;
        printf("end ptr: %p\n", (void *)current);
        i++;
    }
}
