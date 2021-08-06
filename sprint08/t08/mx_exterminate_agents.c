#include "only_smiths.h"
#include <stdio.h>
#include <stdlib.h>

void mx_exterminate_agents(t_agent ***agents) {
    for (int i = 0; (*agents)[i]; i++) {
        free((*agents)[i]->name);
        free((*agents)[i]);
    }
    free(*agents);
    *agents = NULL;
}

// int main(void) {
//     t_agent **arr = (t_agent **) malloc (sizeof(t_agent) * (4));
//     arr[4] = NULL;
//     mx_exterminate_agents(&arr);
//     printf("ptr: %p\n", (void *)arr);
// }
