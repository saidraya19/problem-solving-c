#include <unistd.h>
#include <stdio.h>
int main(int ac, char **av)
{
    if(ac != 2)
    {
        write(1, "\n", 1);    //00111001
        return 0;
    }
    int count = 0;
    int i = 1;
    while(av[1][i + 1])
    {
        if(av[1][i] != av[1][i + 1])
        {
            count++;
        }
        i++;
    }
    if( count > 9)
    {
        write(1, "\n", 1);
        return 0;
    }
    printf("count = %d", count);
    return 0;
}
