#include <unistd.h>
int main(int ac, char **av)
{
    if(ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    int freq[255] = {0};
    int i = 0;
    while(av[1][i])
    {
        if(freq[(unsigned char) av[1][i]] == 0)
        {
            write(1, &av[1][i], 1);
            freq[(unsigned char) av[1][i]]++;
        }
        else
        {
            write(1,"\n", 1);
            break;
        }
        i++;
    }
    return 0;
}
