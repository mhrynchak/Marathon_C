#include "minilibmx.h"

void valid_argc (int argc) {
    if (argc != 3) {
        mx_printerr("usage: ./mx_cp p [source_file] [destination_file]\n");
        exit(errno);
    }
}

void valid_file (int fd, char *file) {
    if (fd == -1) {
        mx_printerr("mx_cp: "); 
        mx_printerr(file);
        mx_printerr(": No such file or directory\n");
        exit(0);
    }
}

void mx_cp (char *file1, char *file2) {
    int fd_read = open(file1, O_RDONLY);
    int fd_write = open(file2, O_WRONLY);
    char c;

    valid_file(fd_read, file1);
    valid_file(fd_write, file2);

    while (read(fd_read, &c, sizeof(c)) > 0)
        write(fd_write, &c, sizeof(c));

    close(fd_read);
    close(fd_write);
}

int main(int argc, char **argv) {
    valid_argc(argc);
    mx_cp(argv[1], argv[2]);
    return 0;
}
