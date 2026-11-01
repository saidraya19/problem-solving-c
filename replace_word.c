#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int     len(char *h)
{
    int  i = 0;
    while(h[i])
    {
        i++;
    }
    return i;
}
char    *replace_word(char *a, char *b, char *c)
{
    int i = 0;
    int  j = 0;
    int y = 0;
    int z = 0;
    int bol = 0;
    char *str = malloc(len(a) + len(c) - len(b) + 1);
    if (!str)
    {
        return NULL;
    }
    while(a[i])
    {
        while(a[i + j] && a[i + j] == b[j])
        {
            j++;
        }
        if(b[j] == '\0')
        {
            y = i;
            z = j + i;
            bol = 1;
            break;
        }
        i++;
        j = 0;
    }
    if(bol)
    {
     int k = 0;
     j = 0;
     i = 0;
     while(j < y && a[i])
     {
         str[j] = a[i];
         i++;
         j++;
     }
     i = 0;
     while(c[i])
     {
         str[j] = c[i];
         j++;
         i++;
     }
     i = z;
     while(a[i])
     {
         str[j]  = a[i];
         j++;
         i++;
     }
     str[j] = '\0';
     return str;
    }
    else
    {
        return  NULL;
    }
}
int main()
{
    char *rtx = replace_word("abcabc", "", "X");
    printf("%s", rtx);
    if(!rtx)
    {
        return 0;
    }
    free(rtx);
    return 0;
}
