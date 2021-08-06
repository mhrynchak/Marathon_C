#include "list.h"
#include "minilibmx.h"

bool cmp(void *a, void *b) {
    return !mx_strcmp((char*)a, (char*)b);
}

int main (void) {
    t_list *test = NULL;
    mx_push_back(&test, "track 8");
    mx_push_back(&test, "song");
    mx_push_back(&test, "track");
    mx_push_back(&test, "track 0");
    mx_push_back(&test, "track 234");
    mx_push_back(&test, "song");
    mx_push_back(&test, "track 766");
    mx_push_back(&test, "song");
    mx_push_back(&test, "track 274");
    mx_push_back(&test, "track 3");
    mx_push_back(&test, "song");
    mx_push_back(&test, "track 173");
    mx_push_back(&test, "song");
    mx_push_back(&test, "track 782");
    mx_push_back(&test, "song");
    // display(&test);
    // printf("\n");
    mx_del_node_if(&test, "song", cmp);
    mx_printstr("\n<after sorting>\n");
    display(&test);
}
