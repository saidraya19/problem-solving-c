#include <unistd.h>
void	triangle(int n)
{
	int i = 1;
	while(i <= n)
	{
		int j = 1;
		while( j <= 2*n - 1)
		{
			if(j >= n -(i - 1) && j <= n + (i - 1))
			{
				write(1, "*", 1);
			}
			else
			{
				write(1, " ", 1);
			}
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
int main()
{
	triangle(5);
	return 0;
}
