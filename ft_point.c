#include <stdio.h>
#include "ft_point.h"
int     set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}
int main(void)
{
    t_point     point;
    set_point(&point);
    printf("%d\n", point.x);
    return 0;
}
