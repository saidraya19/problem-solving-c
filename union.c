#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	int i = 0;
	if(argc != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	char *str = argv[1];
	char *rtx = argv[2];
	char exist[256] = {0};
	while(str[i])
	{
		if(!exist[(unsigned char)str[i]])
		{
			write(1, &str[i], 1);
			exist[(unsigned char)str[i]] = 1;
		}
		i++;
	}
	int k = 0;
	while(rtx[k])
	{
		if(!exist[(unsigned char)rtx[k]])
		{
			write(1, &rtx[k], 1);
			exist[(unsigned char)rtx[k]] = 1;
		}
		k++;
	}
	write(1, "\n", 1);
	return 0;
}
