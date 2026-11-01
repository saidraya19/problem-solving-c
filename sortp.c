#include <unistd.h>
#include <stdlib.h>
int count(char *str)
{
    int i = 0;
    int c = 0;
    while(str[i])
    {
        if(str[i] != ' ' && ((i == 0) || str[i - 1] == ' '))
        {
            c++;
        }
        i++;
    }
    return c;
}
int main(int ac, char **av)
{
    if(ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    char **rtx;
    rtx = malloc((count(av[1]) + 1) * sizeof(char *));
    int  i = 0;
    int j = 0;
    while(av[1][i])
    {
        int k = 0;
        while(av[1][i] == ' ')
        {
            i++;
        }
        if(av[1][i] == '\0')
        {
            break;
        }
        int ln = i;
        while(av[1][ln] && av[1][ln] != ' ')
        {
            ln++;
        }
        ln = ln - i;
        rtx[j] = malloc(ln + 1);
        while(k < ln)
        {
            rtx[j][k] = av[1][i];
            k++;
            i++;
        }
        rtx[j][k] = '\0';
        j++;
    }
    rtx[j] = NULL;
    j = j - 1;
    while(j >= 0)
    {
        int i = 0;
        while(rtx[j][i])
        {
            write(1, &rtx[j][i], 1);
            i++;
        }
        if(j > 0)
        {
            write(1, " ", 1);
        }
        j--;
    }
    return 0;
}
