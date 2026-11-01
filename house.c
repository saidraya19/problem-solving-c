#include <unistd.h>
#include <stdio.h>
int	house(int *nbr, int size)
{
	int i = 0;
	int len = size - 1;
	int max = 0;
	while(i < size)
	{
		if(nbr[i] != nbr[len])
		{
			int dis = len - i;
		       if(max < dis)
		       {
			       max = dis;
		       }
		}
		i++;
	}
	int max1  = max;
	max = 0;
	i = len;
	while(i > 0)
	{
		if(nbr[i] != nbr[0])
		{
			max = i;
			break;
		}
		i--;
	}
	return (max < max1) ? max1 : max;
}
int main()
{
	int nb[] = {1,8,3,8,3};
	int size = sizeof(nb) / 4;
	int result = house(nb, size);
       printf("length is : ");
       printf("%d", result);
       return 0;
}
