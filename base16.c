#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
    char *base = "0123456789ABCDEF";
    if(argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    int j = 0;
    long nbr = 0;
    while (argv[1][j])
    {
        nbr = nbr * 10 + (argv[1][j] - '0');
        j++;
    }
    if(nbr == 0)
    {
        write(1, "0", 1);
        return 0;
    }
    char s[65];
    int i = 0;
    while(nbr > 0)
    {
        s[i] = base[nbr % 16];
        nbr = nbr / 16;
        i++;
    }
    while(i > 0)
    {
        i--;
        write(1, &s[i], 1);
    }
    write(1, "\n", 1);
    return 0;
}
