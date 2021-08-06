#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    t_agent **new_agents = NULL;
    int j = 0, k = 0;
    
    if (!agents)
        return NULL;
    
    for (int i = 0; agents[i]; i++)
        if (!mx_strcmp(agents[i]->name, "Smith") && agents[i]->strength < strength)
            k++;

    new_agents = (t_agent **) malloc (sizeof(t_agent) * k);
    
    for (int i = 0; agents[i]; i++) {
        if (!mx_strcmp(agents[i]->name, "Smith") && agents[i]->strength < strength) {
            new_agents[j] = mx_create_agent(agents[i]->name, agents[i]->power, agents[i]->strength);
            j++;
        }
    }

    new_agents[j] = NULL;
    mx_exterminate_agents(&agents);

    if (new_agents)
        return  new_agents;
    return NULL;
}

// int main(void) {
//     t_agent **agents = (t_agent **) malloc (sizeof(t_agent) * 6);
    
//     agents[0] = mx_create_agent("Smith", 150, 166);
//     agents[1] = mx_create_agent("Brown", 147, 57);
//     agents[2] = mx_create_agent("Smith", 151, 65);
//     agents[3] = mx_create_agent("Smith", 123, 321);
//     agents[4] = mx_create_agent("Smith", 138, 97);
//     agents[5] = NULL;

//     t_agent **new_agents = mx_only_smiths(agents, 100);

//     for (int i = 0; new_agents[i]; i++) {
//         printf("Agent %d\n", i);
//         printf("name: %s\n", new_agents[i]->name);
//         printf("power: %d\n", new_agents[i]->power);
//         printf("strength: %d\n\n", new_agents[i]->strength);
//     }

//     mx_exterminate_agents(&new_agents);
//     printf("ptr: %p\n", (void *)new_agents);
// }
