#include <unistd.h>
int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
    char c;
	int i = 0;
	while(argv[1][i])
	{
        if(!(argv[1][i] >= 'a' &&  argv[1][i] <= 'z' || argv[1][i] >= 'A' &&  argv[1][i] <= 'Z'))
        {
            write(1, &argv[1][i], 1);
        }
        if(argv[1][i] >= 'a' &&  argv[1][i] <= 'z')
        {
             c = 'a';
        }
        else if(argv[1][i] >= 'A' &&  argv[1][i] <= 'Z')
        {
             c = 'A';
        }
		while(argv[1][i] - c > 0)
		{
			write(1, &argv[1][i], 1);
			c++;
		}

		i++;
    }
	return (0);
}
