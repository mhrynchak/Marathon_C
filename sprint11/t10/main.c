#include "list.h"
#include "minilibmx.h"

bool cmp(void *a, void *b) {
    return mx_strcmp((char*)a, (char*)b) > 0;
}

int main (void) {
    t_list *test = NULL;
    mx_push_back(&test, "track 8");
    mx_push_back(&test, "track 14");
    mx_push_back(&test, "track 16");
    mx_push_back(&test, "track 10");
    mx_push_back(&test, "track 23");
    mx_push_back(&test, "track 7");
    mx_push_back(&test, "track 76");
    mx_push_back(&test, "track 11");
    mx_push_back(&test, "track 27");
    mx_push_back(&test, "track 33");
    mx_push_back(&test, "track 18");
    mx_push_back(&test, "track 17");
    mx_push_back(&test, "track 55");
    mx_push_back(&test, "track 78");
    mx_push_back(&test, "track 19");

    mx_sort_list(test, cmp);
    mx_printstr("\n<after sorting>\n");
    display(&test);
}
