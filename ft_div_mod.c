#include <unistd.h>
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main()
{
	int a;
	int b;
	ft_div_mod(10, 2, &a, &b);
	printf(" div = %d, mod = %d", a, b);
	return 0;
}

