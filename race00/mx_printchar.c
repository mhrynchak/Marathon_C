#include <unistd.h>
/*
void mx_printchar(char c);

int main(void) {
    char simb =66;
    mx_printchar(simb);
}*/

void mx_printchar(char c) {
    write (1, &c, 1);
}
