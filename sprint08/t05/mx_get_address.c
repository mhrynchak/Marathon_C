#include "get_address.h"
#include <stdio.h>
#include <stdlib.h>

char *mx_get_address(void *p) {
    unsigned long ptr = (unsigned long) p;     //get the decimal of ptr
    char *tmp = mx_nbr_to_hex(ptr);     //converting to hex
    char *res = NULL;

    res = mx_strnew(mx_strlen(tmp));
    mx_strcpy(res, "0x");    //concatenating 
    mx_strcpy(res + 2, tmp);    //to final string
    
    free(tmp);

    return res;
}

// int main(void) {
//     char *ptr = "hello";
//     char *address = mx_get_address(ptr);
//     printf("address: %s\n", address);
//     mx_strdel(&address);
// }
