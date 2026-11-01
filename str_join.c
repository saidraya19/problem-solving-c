#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int     strlen2(char *s)
{
    int  i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}
char *ft_strjoin(int size, char **strs, char *sep)
{
    int i = 0;
    int len = 1;
    while(i < size)
    {
       len += strlen2(strs[i]);
        if( i < size - 1)
        {
            len += strlen2(sep);
        }
        i++;
    }
    char *rtx = malloc ((len + 1) * sizeof(char));
    int k = 0;
    i = 0;
    while(i < size)
    {
        int j = 0;
        while(strs[i][j])
        {
            rtx[k++] = strs[i][j++];
        }
    if(i < size - 1)
    {
        j = 0;
        while(sep[j])
        {
            rtx[k++] = sep[j++];
        }
    }
    i++;
    }
    rtx[k] = '\0';
    return rtx;    
}
int main()
    {
        char *sep = "%%%%";
        char *tr[] = {"hello", "world", "im", "so", "happy"};
        char *s = ft_strjoin(5, tr, sep);
        printf("%s\n", s);
        return 0;
    }
