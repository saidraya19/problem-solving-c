#include <unistd.h>
int     main(int argc, char **argv)
{
        if( argc != 2)
        {
                write(1, "\n", 1);
                return 0;
        }
	int start = 0;
	int end = 0;
	while(argv[1][end])
	{
		end++;
	}
	end = end - 1;
	while(argv[1][end] == ' ')
	{
		end--;
	}
	start = end;
	while( start >= 0 && argv[1][start] != ' ')
	{
		start--;
	}
	start = start + 1;
	while(start <= end)
	{
		write(1, &argv[1][start], 1);
		start++;
	}
	//write(1, "\n", 1);
	return 0;
}
