#include <unistd.h>
void ft_print_numbers()
{
	int i = 0;
	while( i <= 9)
	{
		char c = i + '0';
		write(1, &c, 1);
		i++;
	}
}
