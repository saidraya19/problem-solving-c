#include <unistd.h>
#include <stdlib.h>
void	ftputchar(char c)
{
	write(1, &c, 1);
}
int     strlen2(char *m)
{
        int i = 0 ;
        while(m[i] != '\0')
        {
                i++;
        }
        return i;
}
void	ft_putnbr( int nb)
{
	if(nb ==  -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	if( nb == 0)
	{
		ftputchar('0');
		return;
	}
	if(nb < 0)
	{
		ftputchar('-');
		nb = -nb;
	}
	char *s = malloc(12 * 1);
	int i = 0;
	while( nb > 0)
	{
		s[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	while( i > 0)
	{
		i--;
		ftputchar(s[i]);
	}
	free(s);
}
int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		ftputchar('\n');
		return 0;
	}
	char freq[256] = {0};
	int j = 0;
	while(argv[1][j])
	{
		if( argv[1][j] >= 'A' && argv[1][j] <= 'Z')
                {
                        argv[1][j] += 32;
                }
		if((argv[1][j] >= 'a' && argv[1][j] <= 'z') || (argv[1][j] >= 'A' && argv[1][j] <= 'Z'))
		{
			freq[(unsigned char) argv[1][j]]++;
		}
		j++;
	}
	j = 0;
	char s[strlen2(argv[1]) + 1];
	char exist[256] = {0};
	int k = 0;
	while(argv[1][j])
	{
		if(exist[(unsigned char)argv[1][j]] == 0 && ((argv[1][j] >= 'a' && argv[1][j] <= 'z')))
		{
			s[k] = argv[1][j];
			k++;
			exist[(unsigned char)argv[1][j]] = 1;
		}
		j++;
	}
	s[k] = '\0';
	j = 0;
	while(s[j])
	{
		ft_putnbr(freq[(unsigned char)s[j]]);
		ftputchar(s[j]);
		if(s[j + 1])
		{
			write(1, ", ", 2);
		}
		j++;
	}
	write(1, "\n", 1);
	return 0;
}
