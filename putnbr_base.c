#include <unistd.h>
int    strlen2(char *s)
{
    int i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}
int    check(char *base)
{
    int i = 0;
    if(strlen2(base) < 2)
    {
        return 0;
    }
    while(base[i])
    {
        if(base[i] == '-' || base[i] == '+' )
        {
            return 0;
        }
        i++;
    }
    i = 0;
    while(base[i])
    {
        int j = i + 1;
        while(base[j])
        {
            if(base[i] == base[j])
            {
                return 0;
            }
            j++;
        }
        i++;
    }
    return 1;
}
void    ft_putnbr(int nbr, char *base)
{
    if(!check(base))
    {
        return;
    }
    int len = strlen2(base);
    long nb = nbr;
    if(nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    char str[33];
    int i = 0;
    if(nb == 0)
    {
        write(1, &base[0], 1);
        return;
    }
    while(nb > 0)
    {
        str[i] = base[nb % len];
        nb = nb / len;
        i++;
    }
    while(i > 0)
    {
        i--;
        write(1, &str[i], 1);
    }
}
int main()
{
    int nb = 111;
    char bas[] = "0123456789abcdef";
    ft_putnbr(nb,bas);
    return 0;
}
