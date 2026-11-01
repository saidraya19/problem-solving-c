#include <stdio.h>
#include <stdlib.h>
int *mismatch(int *num, int numsize, int *returnsize)
{
    int *s = malloc(2 * sizeof(int));
    int i = 0;
    while(i < numsize)
    {
        int j = i + 1;
        while(j < numsize)
        {
            if(num[i] == num[j])
            {
                s[0] = num[i];
                break;
            }
            j++;
        }
        i++;
    }
    int k;
    int m = 1;
    while( m <= numsize)
    {
        k = 1;
        int l = 0;
        while(l < numsize)
        {
            if(m == num[l])
            {
                k = 0;
            }
            l++;
        }
        if(k == 1)
        {
            s[1] = m;
            break;
        }
        m++;
    }
    *returnsize = 2;
    return s;
}
int main()
{
    int s[] = {2, 2, 2};
    int numsize = 3;
    int sizer = 0;
    int *num = mismatch(s, numsize, &sizer);
    printf(" [%d, %d]", num[0], num[1]);
    return 0;
}

