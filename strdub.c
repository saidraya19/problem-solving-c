#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int     strlen2(char *s)
{
    int i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}
char    *ft_strdup(char *src)
{
    char *dest = malloc((strlen2(src) + 1));
    int  i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
int main()
{
    char y[] = "hello world im  very happy";
    char *d = ft_strdup(y);
    printf("%s \n", d);
    return 0;
}
