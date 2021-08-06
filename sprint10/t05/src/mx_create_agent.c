#include "minilibmx.h"
#include "agent.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    t_agent *agent = (t_agent*) malloc (sizeof(t_agent));

    if (!name)
        return NULL;

    agent->name = mx_strdup(name);
    agent->power = power;
    agent->strength = strength;

    if (agent)
        return agent;
    return NULL;
}

// int main(void) {
//     t_agent *agent = mx_create_agent("Max", 144, 98);
//     printf("name: %s\n", agent->name);
//     printf("power: %d\n", agent->power);
//     printf("strength: %d\n", agent->strength);
//     mx_strdel(&agent->name);
//     free(agent);
// }
