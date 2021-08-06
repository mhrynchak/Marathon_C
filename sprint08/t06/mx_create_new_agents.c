#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    t_agent **arr = (t_agent **) malloc (sizeof(t_agent) * (count + 1));
    
    for (int i = 0; i < count; i++) {
        arr[i] = mx_create_agent(name[i], power[i], strength[i]);
    }

    arr[count] = NULL;

    return arr;
}

// int main(void) {
//     char *names[] = {"Thompson", "Smith", "Colson"};
//     int powers[] =  {    33,       66,       99   };
//     int strengths[] = {  133,      166,     196   };
//     t_agent **squad = mx_create_new_agents(names, powers, strengths, 3);
//     //printing out info about each agent
//     for (int i = 0; i < 3; i++) {
//         printf("Agent %d\n", i);
//         printf("name: %s\n", squad[i]->name);
//         printf("power: %d\n", squad[i]->power);
//         printf("strength: %d\n\n", squad[i]->strength);
//     }
//     //freeing memory
//     for (int i = 0; i < 3; i++) {
//         mx_strdel(&squad[i]->name);
//         free(squad[i]);
//     }
//     free(squad);
// }
