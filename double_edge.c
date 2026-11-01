#include <unistd.h>
int len(char *s){ int i = 0; while(s[i]){ i++; } return i;}
int main(int ac, char **av)
{
    if(ac != 2 || av[1][0] == '\0' )
    {
        write(1, "\n", 1);
        return 0;
    }
    int j = len(av[1]);
    int i = 0;
    while(av[1][i])
    {
        if(av[1][i] == av[1][0] || av[1][i] == av[1][j - 1])
        {
            write(1, &av[1][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return 0;
}
