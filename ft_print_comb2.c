#include <unistd.h>
void	ftputchar(char c)
{
	write(1, &c, 1);
}
void	print_num(int n)
{
	ftputchar(n / 10 + '0');
	ftputchar(n % 10 + '0');
}
void	ft_print_comb2()
{
	int i = 0;
	while(i <= 98)
	{
		int j = i + 1;
		while(j <= 99)
		{
			print_num(i);
			ftputchar(' ');
			print_num(j);
			if(!(i == 98 && j == 99))
			{
				ftputchar(',');
				ftputchar(' ');
			}
			j++;
		}
		i++;
	}
}
int main()
{
	ft_print_comb2();
	return 0;
}





