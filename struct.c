#include "file3.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int    len(char *s)
{
    int i = 0;
    while(s[i])
    {
        i++;
    }
    return i; 
}
t_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *arr = malloc(sizeof(t_stock_str) * (ac + 1));
    if(!arr)
    {
        return 0;
    }
    int i = 0;
    while(i < ac)
    {
        arr[i].size = len(av[i]);
        arr[i].str = av[i];
        arr[i].copy = malloc((len(av[i]) + 1));
        if(!arr[i].copy)
        {
            return 0;
        }
        int j = 0;
        while(av[i][j])
        {
            arr[i].copy[j] = av[i][j];
            j++;
        }
        arr[i].copy[j] = '\0';
        i++;
    }
        arr[ac].str = NULL;
        arr[ac].copy = NULL;
        arr[ac].size = 0;
    return arr;
}
