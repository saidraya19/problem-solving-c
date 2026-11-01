#include <unistd.h>
int len(char *s) {int i = 0; while(s[i]){i++;} return i;}
void hex(int nb)
{
    char *base = "0123456789abcdef";
    char str[32];
    int i = 0;
    while(nb > 0)
    {
        str[i] = base[nb % 16];
        nb /= 16;
        i++;
    }
    str[i] = '\0';
    i = len(str) - 1;
    while( i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
}
int main()
{
    hex(255);
    return 0;
}
