#include <unistd.h>
void	ft_putnbr_comb(int *tab, int n)
{
	int	i, c;
	i = 0;
	while (i < n)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
}
void	ft_print_combn(int n)
{
	int tab[10];
	int i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (tab[0] <= (10 - n))
	{
		ft_putnbr_comb(tab, n);
		if (tab[0] != (10 - n))
		{
			write(1, ", ", 2);
		}
		i = n - 1;
		while (i >= 0 && tab[i] == (10 - n + i))
		{
			i--;
		}
		if (i < 0)
		{
			break;
		}
		tab[i]++;
		while (++i < n)
		{
			tab[i] = tab[i - 1] + 1;
		}
	}
}
int	main(void)
{
	ft_print_combn(5);
	return (0);
}
