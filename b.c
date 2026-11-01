#include <stdio.h>
int main()
{
    int tab[5] = {10, 20, 30, 40, 50};
int *start = tab;
int *end = &tab[4];

int result = end - start;
printf("%p\n%p\n%d ", start, end, result);
return 0;
}
