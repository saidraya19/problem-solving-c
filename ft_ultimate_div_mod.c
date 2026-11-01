#include <unistd.h>
#include <stdio.h>
void    ft_div_mod(int *a, int *b)
{
	int temp = *a;
        *a = *a / *b;
	*b = temp % *b;
}
int main()
{
        int x = 10;
        int y = 2;
        ft_div_mod(&x, &y);
        printf(" div = %d, mod = %d", x, y);
        return 0;
}
