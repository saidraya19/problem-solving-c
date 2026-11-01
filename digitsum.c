#include <unistd.h>
#include <stdio.h>
int     digitsum(char *s)
{
    int i = 0;
    int sum = 0;
    while(s[i])
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            sum += s[i] - '0';
        }
        i++;
    }
    return sum;
}
int main()
{

    int s = digitsum("abc123def456");
    printf("%d\n", s);
    return 0;
}
