#include "minilibmx.h"
#include "agent.h"

void valid_argc (int argc) {
    if (argc != 3) {
        mx_printerr("usage: ./parse_agents [-p | -s | -n] [file_name]\n");
        exit(errno);
    }
}

void valid_flag (char *flag) {
    if (mx_strcmp(flag,"-p") && mx_strcmp(flag,"-s") && mx_strcmp(flag,"-n")) {
        mx_printerr("usage: ./parse_agents [-p | -s | -n] [file_name]\n");
        exit(errno);
    }
}

void valid_file (int fd) {
    if (fd == -1) {
        mx_printerr("error\n");
        exit(errno);
    }
}

void mx_swap(t_agent *a, t_agent *b) {
    t_agent temp = *a;
    *a = *b;
    *b = temp;
}

bool mx_power (t_agent *a, t_agent *b) {
    return a->power > b->power;
}

bool mx_strength (t_agent *a, t_agent *b) {
    return a->strength > b->strength;
}

bool mx_name (t_agent *a, t_agent *b) {
    return mx_strcmp(a->name, b->name) > 0;
}

void mx_sort(t_agent **arr, int size, bool(*f)(t_agent *, t_agent *)) {
    for (int i = 1; i < size - 1; i++)
		for (int j = 0; j < size - 2; j++)	
			if (f(arr[j], arr[j + 1]))
                mx_swap(arr[j], arr[j + 1]);
}

void mx_printout (t_agent **agents) {
     for (int i = 0; agents[i]; i++) {
        mx_printstr("agent: ");
        mx_printstr(agents[i]->name);
        mx_printstr(", strength: ");
        mx_printint(agents[i]->strength);
        mx_printstr(", power: ");
        mx_printint(agents[i]->power);
        mx_printchar('\n');
    }
}

void mx_parse(char *flag, char *file) {
    char *buff = mx_file_to_str(file), *name = NULL, *pow, *str;
    t_agent **agents = NULL;
    int lines = 0, tmp, j = 0, power, strength, size;

    for (int i = 0; buff[i]; i++)
        if (buff[i] == '\n')
            lines++;

    size = lines / 5 + 1;
    agents = (t_agent **) malloc(sizeof(t_agent) * size);

    for (int i = 0; buff[i]; i++) {
        if (buff[i] == ':') {
            i++;
            tmp = i + 1;
            while (buff[i] != '\n')
                i++;
            name = mx_strndup(buff + tmp, i - tmp);
            
            while (buff[i] != ':')
                i++;
            i++;
            tmp = i;
            while (buff[i] != '\n')
                i++;
            pow = mx_strndup(buff + tmp, i - tmp);
            power = mx_atoi(pow);

            while (buff[i] != ':')
                i++;
            i++;
            tmp = i;
            while (buff[i] != '\n')
                i++;
            str = mx_strndup(buff + tmp, i - tmp);
            strength = mx_atoi(str);
            agents[j] = mx_create_agent(name, power, strength);
            mx_strdel(&str);
            mx_strdel(&pow);
            mx_strdel(&name);
            j++;
        }
    }

    agents[j] = NULL;

    if (!mx_strcmp(flag, "-p")) 
        mx_sort(agents, size, mx_power);
    else if(!mx_strcmp(flag, "-s"))
        mx_sort(agents, size, mx_strength);
    else if (!mx_strcmp(flag, "-n"))
        mx_sort(agents, size, mx_name);
    mx_printout(agents);
    mx_strdel(&buff);
    mx_exterminate_agents(&agents);
}

int main(int argc, char **argv) {
    valid_argc(argc);
    valid_flag(argv[1]);
    mx_parse(argv[1], argv[2]);
    return 0;
}
