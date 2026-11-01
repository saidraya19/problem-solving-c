#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int     count(int nb)
{
    int count = 0;
    if(nb <= 0)
    {
        count++;
        nb = -nb;
    }
    while(nb > 0)
    {
        nb /= 10;
        count++;
    }
    return count;
}
char	*ft_itoa(int nbr)
{
    char *str = malloc((count(nbr) + 1));
    int i = count(nbr); 
    str[i] = '\0';
    if(nbr == 0)
    {
        str[0] = '0';
    }
    if(nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
    }
    while(nbr > 0)
    {
        str[--i] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return str;
}
int main()
{
    int h = -1234;
    char *rtx = ft_itoa(h);
    printf("%s\n", rtx);
    return 0;
}
