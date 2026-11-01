#include <unistd.h>
#include <stdio.h>

int strlen2(char *s)
{
    int i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}
int    check(char *base)
{
    if(strlen2(base) < 2)
    {
        return 0;
    }
    int i = 0;
    while(base[i])
    {
        if(base[i] == ' ' || base[i] == '-' || base[i] == '+')
        {
            return 0;
        }
        int j = i + 1;
        while(base[j])
        {
            if( base[i] == base[j])
            {
                return 0;
            }
            j++;
        }
        i++;
    }

    return 1;
}
int    atoi_base(char *str , char *base)
{
    if(check(base) == 0)
    {
        return 0; 
    }
    int i = 0;
    int sign = 1;
    while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
    {
        i++;
    }
    while(str[i] == '-' ||str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    int res = 0;
    while(str[i])
    {
        int j = 0;
        while(base[j] && str[i] != base[j])
        {
            j++;
        }
        if(base[j])
        {
            res = res * strlen2(base) + j;
            i++;
        }
        else
        {
            break;
        }
    }
return ( res * sign );
}

int main()
{
    int res = atoi_base("---1001", "01");
    printf(" result : %d\n", res);
    return 0;
}
