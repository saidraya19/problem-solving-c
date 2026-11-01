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
int     len(int size, char **str, char *sep)
{
    int res = 0;
    int i = 0;
    while(i < size)
    {
        res += strlen2(str[i]);
            if(i < size - 1)
            {
                res += strlen2(sep);
            }
            i++;
    }
    return res;
}
char    *check()
{
    char *empty = malloc(1);
    if(!empty)
    {
        return NULL;
    }
    empty[0] = '\0';
    return empty;
}
char *ft_strjoin(int size, char **strs, char *sep)
{
    if(size <= 0)
    {
        return check();
    }
    int ln = len(size, strs, sep);
    char *rtx = malloc((ln + 1));
    if(!rtx)
    {
        return NULL;
    }
    int  i = 0;
    int k = 0;
    while( i < size)
    {
         int  j = 0;
        int h = 0;
        while(strs[i][j])
        {
            rtx[k++] = strs[i][j++];
        }
        if(strs[i][j] == '\0' && i < size - 1)
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
    char *s = "$$";
    char *tr[] = {"hello", "world", "im", "so", "happy"};
    char *result = ft_strjoin(0, tr, s);
    printf("%s\n", result);
    free(result);
    return 0;
}
