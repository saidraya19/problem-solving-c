#include <unistd.h>
int main(int ac, char **av)
{
    if(ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    int i = 0;
    write(1, "   -------\n", 11);
    write(1, "  /       \\\n", 13);
    write(1, "     ---  \n", 11);
    write(1, "/   /   \\   \\\n", 15);
    while(i < 8)
    {
        write(1, "|  |", 4);
        write(1, &av[1][0], 1);
        write(1, &av[1][0], 1);
        write(1, &av[1][0], 1);
        write(1, &av[1][0], 1);
        write(1, &av[1][0], 1);
        write(1, &av[1][0], 1);
        write(1, &av[1][0], 1);
        write(1, &av[1][0], 1);
        write(1, "|\n", 2);
        i++;
    }
    write(1, "|  |________|\n", 14);
     write(1, "|  |________/\n", 14);
     return 0;
}
 

