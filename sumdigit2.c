#include <unistd.h>
int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n",1);
        return 0;
    }
    int nb = 0;
    int  i = 0;
    while(argv[1][i])
    {
        nb += argv[1][i] - '0';
        i++;
    }
    while(nb >= 10)
    {
        int new_sum = 0;
        while(nb > 0)
        {
            new_sum += nb % 10;
            nb /= 10;
        }
        nb = new_sum;
    }
    char c = nb + '0';
    write(1, &c, 1);
    write(1, "\n", 1);
    return 0;
}
