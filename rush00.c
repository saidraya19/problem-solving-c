#include <unistd.h>

void	rush00(int rows, int cols)
{
	int i = 1;
	while(i <= rows)
	{
		int j = 1;
		while( j <= cols)
		{
			if( i == 1 && j  == 1 || j == cols && i == 1 || i == rows && j == 1 || i == rows && j == cols)
			{
				write(1, "o", 1);
			}
			else if( (i == 1 && j < cols && j > 1) || (i == rows  && (j < cols && j > 1)))
			{
				write(1, "-", 1);
			}
			else if( ((i > 1 && i < rows) && j == 1) || ((i > 1 && i < rows) && (j == cols)))
			{
				write(1, "|", 1);
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
	rush00(3, 5);
	return 0;
}

