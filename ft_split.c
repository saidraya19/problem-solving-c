#include <unistd.h>
#include <stdlib.h>
int    find(char *s, char c)
{
    int i = 0;
    while(s[i])
    {
        if(s[i] == c)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int     countwords(char *str, char *charset)
{
    int  i = 0;
    int count  = 0;
    while(str[i])
    {
        if(find(charset, str[i]) == 1 && (i == 0 || find(charset, str[i - 1]) == 0))
        {
            count++;
        }
        i++;
    }
    return count;
}
char    **split(char *str, char *charset)
{
    char **arr = malloc( (countwords(str,charset) + 1) * sizeof(char *));
    int i = 0;
    int j = 0;
    while(str[i])
    {
        int k = 0; 
        while(str[i] && find(charset, str[i]) == 0)
        {
            i++;
        }
        if(str[i] == '\0')
        {
          break;
        }
        int len = i;
        while(str[len] && find(charset, str[len]) != 0 )
        {
            len++;
        }
        len = len - i;
        arr[j] = malloc((len + 1) * sizeof(char));
        while(k < len)
        {
            arr[j][k++] = str[i++];
        }
        arr[j][k] = '\0';
        j++;
    }
    arr[j] = NULL;
    return arr;
}
int  main()
{
    char sup[] = ",;.";
    char er[] = "hello,;.world,;.im,;.so,;.happy,;.";
    char **rtx = split(er, sup);
    int i = 0;
    while(rtx[i])
    {
        int j = 0;
        while(rtx[i][j])
        {
            write(1, &rtx[i][j], 1);
            j++;
        }
        if(rtx[i + 1])
        {
            write(1, ",", 1);
        }
        i++;
    }
}
