#include <unistd.h>
#include <stdlib.h>
int     strlen2(char *m)
{
        int i = 0 ;
        while(m[i] != '\0')
        {
                i++;
        }
        return i;
}
int	countwords(char *s)
{
	int i = 0;
	int count = 0;
	while(s[i])
	{
		if(s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
		{
			count++;
		}
		i++;
	}
	return count;
}
int main(int argc, char **argv)
{
	int i = 0;
	if(argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	int j = 0;
	char **str = malloc((countwords(argv[1]) + 1) * sizeof(char *));	
	while(argv[1][i])
	{
		int k = 0;
		while(argv[1][i] == ' ' && argv[1][i] != '\0')
		{
			i++;
		}
		if (argv[1][i] == '\0')
		{
			break;
		}
		int len = 0;
		while( argv[1][i + len] != ' ' && argv[1][i + len] != '\0')
		{
			len++;
		}
		str[j] = malloc((len + 1) * 1);
		while(k < len)
		{
			str[j][k] = argv[1][i];
			i++;
			k++;
		}
		str[j][k] = '\0';
		j++;
	}
	str[j] = NULL;
	i = 0;
	while(str[i])
	{
		j = 0;
		while(str[i][j])
		{
			write(1, &str[i][j], 1);
			j++;
		}

		if(str[i + 1])
		{
			write(1, " ", 1);
		}
		free(str[i]);
		i++;
	}
	free(str);
	return 0;
}
