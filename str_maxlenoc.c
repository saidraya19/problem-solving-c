#include <unistd.h>
int	main(int argc, char **argv)
{
	int i = 1;
	int freq[256] = {0};
	int count = 0;
	while(argv[i])
	{
		int temp[256] = {0};
		char *l = argv[i];
		int k = 0;
		while(l[k])
		{
			temp[l[k]]++;
			k++;
		}
		k = 0;
		while(l[k])
		{
			if(temp[l[k]] >= 1)
			{
				freq[l[k]]++;
				temp[l[k]] = 0;
			}
			k++;
		}
		count++;
		i++;
	}
	i = 0;
	int k = 0;
	while( i < 256)
	{
		if(freq[i] == count)
		{
			write(1, &i, 1);
			k = 1;
		}
		i++;
	}
	if( k == 0)
	{
		write(1, "\n", 1);
	}
	return 0;
}

