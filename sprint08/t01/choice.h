#ifndef CHOICE_SEEN
#define CHOICE_SEEN

#define MX_RED_PILL 1
#define MX_BLUE_PILL 0
#define MX_SUCCESS_PHRASE "Follow me!"
#define MX_FAIL_PHRASE "Perhaps I was wrong about you, Neo."
#define MX_UNDEFINED_PHRASE "Are you sure about that?"
#define t_phrase char

int mx_strlen(const char *s);
char *mx_strcpy(char* dst, const char* src);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);

#endif