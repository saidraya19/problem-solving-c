#include <unistd.h>
#include <stdlib.h>

void	ftputnbr(int n)
{
	long nb = n;
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if(nb == 0)
	{
		write(1, "0", 1);
		return;
	}
	char str[19];
	int i = 0;
	while(nb > 0)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}


int *ft_range(int start, int end)
{
	int size = 0;
	if (start <= end)
	{
		size = end - start + 1;
	}
	else
	{
		size = start - end + 1;
	}
	int *arr = malloc(size * sizeof(int));
	int i = 0;
		while(i < size)
		{
			arr[i++] = end;
			if(end >= start)
			{
				end--;
			}
			else
			{
				end++;
			}
		}
	return arr;
}
int main()
{
	int *ar = ft_range(1,-5);
	int i = 0 ;
	while( i < 7)
	{
		ftputnbr(ar[i]);
		write(1, " ", 1);
		i++;
	}
	free(ar);
	return 0;
}


			
