#include "list.h"

void mx_pop_index(t_list **list, int index) {
    t_list *ptr = *list, *temp;

    if (ptr == NULL)
        return;
    else if (index <= 0)
        mx_pop_front(list);
    else {
        for (int i = 0; i < index; i++) {
            temp = ptr;
            ptr = ptr->next;
            if (ptr->next == NULL) {
                mx_pop_back(list);
                return;
            }
        }
        temp->next = ptr->next;
        free(ptr);
    }
}
