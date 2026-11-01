#include <unistd.h>
#include <stdio.h>
int len(char *s){ int i = 0; while(s[i]){ i++; } return i;}
int main(int ac, char **av)
{
    if(ac != 2 || len(av[1]) < 3 )
    {
        write(1, "\n", 1);
        return 0;
    }
    int j = len(av[1]);
    int i = 1;
    while(i < j - 1)
    {
        write(1, &av[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}
