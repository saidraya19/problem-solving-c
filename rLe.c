#include <unistd.h>

int main(int ar, char **av)
{
    if(ar != 2 || av[1][0] == '\0')
    {
        return 0;
    }
    int count = 0;
    int i  = 0;
    while(av[1][i])
    {
        count = 1;
        while(av[1][i] == av[1][i + 1] && av[1][i + 1])
        {
            count++;
            i++;
        }
        if(count > 9)
        {
            write (1, "9", 1);
        }
        else if(count > 1  && count <= 9)
        {
            char c = count + '0';
            write(1, &c, 1);
        }

        write(1, &av[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}
