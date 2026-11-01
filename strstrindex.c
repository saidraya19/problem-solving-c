#include <unistd.h>
#include <stdio.h>

char    *strstr2(char *srs, char *dest)
{
    int  i = 0;
    int  j = 0;
    while(srs[i])
    {
        while(srs[i + j] == dest[j] && dest[j] != '\0')
        {
            j++;
        }
        if(dest[j] == '\0')
        {
            return srs + i;
        }
        i++;
        j = 0;
    }
}
int main()
{
    char  *index = strstr2("helloway", "hello");
    printf("%s", index);
    return 0;
}
