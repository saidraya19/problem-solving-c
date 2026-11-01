#include <unistd.h>
int len(char *s){ int i = 0; while(s[i]){ i++; } return i;}
int main(int ac, char **av)
{
    if(ac != 3 || len(av[2]) != 1)
    {
        write(1, "\n", 1);
        return 0;
    }
    int i = 0;
    while(av[1][i] && av[1][i] != av[2][0])
    {
        i++;
    }
    while(av[1][i])
    {
        write(1, &av[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}
