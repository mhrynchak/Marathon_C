#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
    t_list *node = NULL;
    t_list *tmp = *list;
    
    if(index <= 0)
        mx_push_front(list, data);
    else {
        for (int i = 0; i < index - 1; i++) {
            if (tmp->next == NULL) {
                mx_push_back(list, data);
                return;
            }
            tmp = tmp->next;
        }
        node = mx_create_node(data);
        node->next = tmp->next;
        tmp->next = node;
    }
}
