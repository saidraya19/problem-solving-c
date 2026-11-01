#include <unistd.h>
int	main(int argc, char **argv)
{
	int i = 1;
	char *t;
	while(i < argc)
	{
		int j = i + 1;
		while(j < argc)
		{
			int k = 0;
			while(argv[i][k] && argv[j][k] && argv[i][k] == argv[j][k])
			{
				k++;
			}
			if(argv[i][k] > argv[j][k])
			{
				t = argv[i], argv[i] = argv[j], argv[j] = t;
			}
			j++;
		}
		i++;
	}
	i = 1;
	while(i < argc)
	{
		int  j = 0;
		while(argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
        if(argv[i + 1])
        {
            write(1, " ", 1);
        }
		i++;
	}
	return 0;
}
