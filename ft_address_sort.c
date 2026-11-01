#include <stdio.h>
#include <string.h>
char    **ft_address_sort(char **str, int size)
{
    int i = 0;
    char *tmp;
    /*printf("%p\n", str);
    printf("%p\n", str + 1);
    printf("%p\n\n", str + 2);
    */
    while(i < size - 1)
    {
        int j = i + 1;
        while(j < size)
        {
            if(strcmp(str[i], str[j]) > 0)
            {
            tmp = str[i];
            str[i] = str[j];
            str[j] = tmp;
            }
            j++;
        }
        i++;
    }
    /*printf("%p\n", str);
    printf("%p\n", str + 1);
    printf("%p\n\n", str + 2);
    */
    return str;
}
int main()
{
    int size = 3;
    char *s[] = {"hello", "world", "abc"};
    char **sort =  ft_address_sort(s, 3);
    int i = 0;
    while(i < size)
    {
        printf("%s\n", sort[i]);
        i++;
    }
    return 0;
}
