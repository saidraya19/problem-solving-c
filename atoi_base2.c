#include <unistd.h>
#include <stdio.h>
int    strlen2(char  *s)
{
    int i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}
int     check(char *base)
{
    if(strlen2(base) < 2)
    {
        return 0;
    }
    int i = 0;
    while(base[i])
    {
        if((base[i] == ' ') || (base[i] == '-')  || (base[i] == '+') || (base[i] >= 9 && base[i] <= 13))
        {
            return 0;
        }
        int j = i + 1;
        while(base[j])
        {
            if(base[i] == base[j])
            {
                return 0;
            }
            j++;
        }
        i++;
    }
    return 1;
}
int     ft_atoi(char *str, char *base)
{
    if(check(base) == 0)
    {
        return 0;
    }
    int i = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    int sign = 1;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign *= - 1;
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
        if(base[j] == str[i])
        {
            res = res * strlen2(base) + j;
            i++;
        }
        else
        {
            break;
        }
    }
    return (res * sign);
}
int main()
{
    printf("result : %d\n", ft_atoi("7e", "0123456789abcdef"));
    printf("Hex: %d\n", ft_atoi("1a", "0123456789abcdef")); // خاص يعطيك 26

    // 2. تجربة Binary مع إشارات وفراغات (Piscine style)
    printf("Binary: %d\n", ft_atoi("  ---1010", "01"));    // خاص يعطيك -10

    // 3. تجربة قاعدة فيها حروف غريبة
    printf("Custom: %d\n", ft_atoi("pon", "poneyvif"));    // خاص يعطيك 73 (0*8^2 + 1*8^1 + 2*8^0)

    // 4. تجربة حرف ما كاينش فـ القاعدة (خاصو يحبس الحساب)
    printf("Stop: %d\n", ft_atoi("123z45", "0123456789")); // خاص يعطيك 123 ويحبس فـ z

    // 5. قاعدة غير صالحة (فيها تكرار)
    printf("Invalid: %d\n", ft_atoi("10", "011"));         // خاص يعطيك 0
            return 0;
            }
