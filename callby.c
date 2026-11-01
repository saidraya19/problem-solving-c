#include <stdio.h>
void    inc(int a, char *s)
{
    s[0] = 'a';
    a = a + 1;
}
int main()
{
    int a = 10;
    char s[] = "hello";
    inc(a,s);
    printf("%d\n%s", a, s);
    return 0;
}
