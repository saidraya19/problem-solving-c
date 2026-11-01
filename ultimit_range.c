#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int     ft_ultimate_range(int **range, int min, int max)
{
    if(max <= min)
    {
        *range = NULL;
        return 0;
    }
    *range = malloc((max - min) * sizeof(int));
    if(!*range)
    {
        return -1;
    }
    int i = 0;
    int size = max - min;
    while(max >= min)
    {
        (*range)[i] = max;
        max--;
        i++;
    }
    return size;
}
int main()
{
    int *arr;
    int size = ft_ultimate_range(&arr, 1, 10);
    int i = 0;
    while(i <= size)
    {
        printf("%d " , arr[i]);
        i++;
    }
    free(arr);
    return 0;
}
