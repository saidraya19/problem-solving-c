#include <unistd.h>
void    palin(int n)
{
    int f = n;
    int res = 0; 
    int h = 0; 
    while( n > 0)
    {
        res  = n % 10;
        h = h * 10 + res;
        n /= 10;

    }
    if(f == h)
    {
        write(1, "true\n", 5);
    }
    else
    {
        write(1, "false\n", 6);
    }
}
int main()
{
    palin(12321);
    return 0;
}
