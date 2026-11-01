#include <unistd.h>
int strcmp1(char *s, char *d)
{
    int i = 0;
    while(s[i], d[i])
    {
        if(s[i] != d[i])
        {
            return s[i] - d[i];
        }
        i++;
    }
    return 0;
}
void    sort(char **str)
{
    int i = 0;
    while(str[i])
    {
        int j = i + 1;
        while(str[j])
        {
            if(strcmp1(str[i], str[j]) > 0)
            {
                char *temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            j++;
        }
        i++;
    }
}
int len(char *r){int i = 0; while(r[i]){i++; } return i;}
int main(int ac, char **av)
{
    if(ac < 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    int i  = 1;
    sort(av);
    while(av[i])
    {
        write(1, av[i], len(av[i]));
        write(1, " ", 1);
        i++;
    }
    return 0;
}
