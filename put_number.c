#include <unistd.h>
#include <stdlib.h>
void	ftputchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	long k  = nb;
	if(k < 0)
	{
		ftputchar('-');
		k = -k;
	}
	if(k == 0)
	{
		ftputchar('0');
		return;
	}
	int i = 0;
	char str[12]; 
	while( k > 0)
	{
		str[i] = (k % 10) + '0';
		k = k / 10;
		i++;
	}
	while(i > 0)
	{
		i--;
		ftputchar(str[i]);
	}
}
int main()
{
	ft_putnbr(-214545548);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-10);
	write(1, "\n", 1);
	ft_putnbr(1);
	write(1, "\n", 1);
	ft_putnbr(1122433454);
	write(1, "\n", 1);
	return 0;
}
