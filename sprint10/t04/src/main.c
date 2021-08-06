#include "minilibmx.h"

void valid_argc (int argc) {
    if (argc < 2) {
        mx_printstr("enter:\n");
    }
}

void valid_file (int fd, char *file) {
    if (fd == -1) {
        mx_printerr("mx_wc: "); 
        mx_printerr(file);
        mx_printerr(": open: No such file or directory\n");
        exit(errno);
    }
}

void printout(int lines, int words, int bytes, char *file) {
    mx_printchar('\t');
    mx_printint(lines);
    mx_printchar('\t');
    mx_printint(words);
    mx_printchar('\t');
    mx_printint(bytes);
    mx_printchar(' ');
    mx_printstr(file);
    mx_printchar('\n');
}

void mx_wc (int argc, char **argv) {
    int fd, t_lines = 0, t_words = 0, t_bytes = 0, lines = 0, words = 0, byte = 0, size = 0;
    char c, prev;

    for (int i = 1; i < argc; i++) {
        lines = 0;
        words = 0;
        size = 0;
        fd = open(argv[i], O_RDONLY);]
        valid_file(fd, argv[i]);
        byte = read(fd, &c, sizeof(c));
        while (byte != 0) {
            size += byte;
            if (c == '\n') {
                lines++;
                if (!mx_isspace(prev))
                    words++;
            }
            else if(c == ' ')
                words++;
            prev = c;
            byte = read(fd, &c, sizeof(c));
        }
        close(fd);
        
        printout(lines, words, size, argv[i]);

        t_lines += lines;
        t_words += words;
        t_bytes += size;
    }

    if (argc > 2)
        printout(t_lines, t_words, t_bytes, "total");
}

int main(int argc, char **argv) {
    valid_argc(argc);
    mx_wc(argc, argv);
    return 0;
}
