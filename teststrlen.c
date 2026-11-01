#include <stdio.h>
int len(char *s){int i = 0; while(s[i])i++;return (i);}
int main()
{
    char d[] = "hello world";
    printf("%d", len(d));
    return 0;
}
