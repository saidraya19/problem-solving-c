#include <unistd.h>

void	comb()
{
	int i = 0;
	while(i <= 7)
	{
		int j = i + 1;
		while(j <= 8)
		{
			int k = j + 1;
			while(k <= 9)
			{
				char c = i + '0';
				char g = j + '0';
				char l = k + '0';
				write(1, &c, 1);
				write(1, &g, 1);
				write(1, &l, 1);
				write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}

}
