#include <unistd.h>
#include <stdio.h>
int    len(char *s)
{
    int i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}
void    st(char *x)
{
    int i = 0;
    while(x[i])
    {
        x[i] = 48;
        i++;
    }
}

void    len2(char *s)
{
    int i = 0;
    while(s[i++])
    {
        s[i] = 48;
    }
}
int main()
{
    char s[] = "hhhh";
    char sr[] = "hhhh";
    len2(s);
    st(sr);
    printf("%s\n", s);
    printf("%s",sr);
    return 0;
}
