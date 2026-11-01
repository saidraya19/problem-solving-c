#include "file3.h"
#include <unistd.h>
#include <stdio.h>
void ft_show_tab( t_stock_str *par)
{
    int i = 1;
    while(par[i].str)
    {
        printf("%d\n", par[i].size);
        write(1, par[i].str, len(par[i].str));
        write(1, "\n", 1);
        if(par[i].copy)
        write(1, par[i].copy, len(par[i].copy));
        write(1, "\n\n\n", 3);
        i++;
    }
}
int     main(int ac, char **av)
{
    t_stock_str *ptr;
    ptr = ft_strs_to_tab(ac, av);
    ft_show_tab(ptr);
    return 0;
}
