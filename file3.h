#ifndef FILE3_H
#define FILE3_H
typedef struct s_stock_str
{
    int size;
    char *str;
    char *copy;
}t_stock_str;
int len(char *str);
t_stock_str *ft_strs_to_tab(int ac, char **av);
#endif
