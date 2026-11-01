#include <unistd.h>
void	print_comb(int *c, int n)
{
	int i = 0;
	char m;
	while( i < n )
	{
		m = c[i] + '0';
		write(1, &m, 1);
		i++;
	}
}
void	combn(int n)
{
	int i = 0;
	int num[10];
	while(i < n)        
	{
		num[i] = i;   
		i++;
	}
	while(num[0] <= (10 - n))
	{
		print_comb(num, n);
		if(num[0] != (10 - n))
		{
			write(1, ", ", 2);
		}
		i = n - 1;
		while(i >= 0 && num[i] == (10 - n + i))
		{
			i--;
		}
		if(i < 0)
		{
			break;
		}
		num[i]++;
		while(++i < n)
		{
			num[i] = num[i - 1] + 1;
		}
	}
}
int main()
{
	combn(9);
	return 0;
}
