void mx_swap(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}
