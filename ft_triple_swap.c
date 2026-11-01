#include <stdio.h>
void    ft_triple(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
int main()
{
    int a = 1, b = 2, c = 3;
    printf("before\n a = %d, b = %d, c = %d\n", a, b, c); 
    ft_triple(&a, &b, &c);
    printf("after\n a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}

