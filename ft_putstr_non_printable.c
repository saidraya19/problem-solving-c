#include <unistd.h>
void	printhex(unsigned c)
{
	char *base = "0123456789abcdef";
	char dc = base[c / 16];
	char sc = base[c % 16];
	write(1, &dc, 1);
	write(1, &sc, 1);
}
void	printebal(char *str)
{
	int i = 0;
	while(str[i])
	{
		if( str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			printhex((unsigned char )str[i]);
		}
		i++;
	}
}
int	main()
{
	char s[] = "Coucou\ntu vas bien ?";
	printebal(s);
	return 0;
}

