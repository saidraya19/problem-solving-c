#include <unistd.h>
int	main(int argc, char **argv)
{
	if( argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	int i = 1;
	int j = 0;
	while(argv[i][j])
	{
		if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
		{
			argv[i][j] = 'z' - (argv[i][j] - 'a');
		}
		else if(argv[i][j] >= 'A' && argv[i][j] <= 'Z')
		{
			argv[i][j] = 'Z' - (argv[i][j] - 'A');
		}
			write(1, &argv[i][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return 0;
}
