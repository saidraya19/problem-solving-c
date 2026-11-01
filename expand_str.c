#include <stdio.h>
#include <unistd.h>
int    prime(int n)
{
    if(n  <= 1)
    {
        write(1, "0\n", 2);
        return 0;
    }
    int i = 2;
    int bol = 1;
    while( i * i <= n)
    {
        if(n % i == 0)
        {
            bol = 0;
            break;
        }
        i++;
    }
    return bol;
}
int     main( int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "0", 1);
        return 0;
    }
    int i = 0;
    int num = 0;
    while(argv[1][i] != '\0')
    {
        if(argv[1][i] >= '0' && argv[1][i] <= '9')
        {
            num = num * 10 + (argv[1][i] - '0');
        }
        i++;
    }
    i = 2;
    int res = 0;
    while(i <= num)
    {
        if(prime(i) == 1)
        {
            res += i;
        }
        i++;
    }
    printf("%d\n", res);
    return 0;
}
