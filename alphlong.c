#include <unistd.h>
//#include <stdio.h>
#include <stdlib.h>
int	countword(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i])
	{
		if(str[i] != ' ' && (i == 0) || (str[i - 1] == ' '))
		{
			count++;
		}
		i++;
	}
	return count;
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
int	strcmp_first(char *s, char *g)
{
	int i = 0;
	while(s[i] && g[i])
	{
		char c1 = s[i];
		char c2 = g[i];
		if((c1 >= 'A' && c1 <= 'Z'))
		{
		c1 += 32;
		}
		if(c2 >= 'A' && c2 <= 'Z')
		{
			c2 += 32;
		}
		if(c1 != c2)
		{
			return (c1 - c2);
		}
		i++;
	}
	return (s[i] - g[i]);
}
int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1,"\n", 1);
		return 0;
	}
	char **arr = malloc((countword(argv[1]) + 1) * sizeof(char *));
	int h = 0;
	int l = 0;
	char *str = malloc((strlen2(argv[1]) + 1) * sizeof(char));
	while(argv[1][h])
	{
		if((argv[1][h] >= 'a' && argv[1][h] <= 'z') || (argv[1][h]>= 'A' && argv[1][h] <= 'Z') || (argv[1][h]== ' ') || (argv[1][h] == '\t'))
		{
			str[l++] = argv[1][h++];

		}
	}
	int  i = 0;
	int j = 0;
	while(str[i])
	{
		while(str[i] == ' ')
		{
			i++;
		}
		if(str[i] == '\0')
		{
			break;
		}
		int len = i;
		while((str[len] != ' ' && str[len] != '\t') && str[len] != '\0' )
		{
			len++;
		}
		len -= i;
		arr[j] = malloc((len + 1) * sizeof(char));
		int k = 0;
		while(k < len)
		{
			arr[j][k++] = str[i++];
		}
		arr[j][k] = '\0';
		j++;
	}
	arr[j] = NULL;
	free(str);
	int swap = 1;
	while(swap)
	{
		swap = 0;
		int i = 0;
		while(arr[i + 1])
		{
			if((strlen2(arr[i]) > strlen2(arr[i + 1])) || (strlen2(arr[i]) == strlen2(arr[i + 1]) && strcmp_first(arr[i], arr[i + 1]) > 0))
			{
				char *temp  = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swap = 1;
			}
		i++;
		}
	}
	j = 1;
	int n = 0;
	while(arr[n])
	{
			write(1, arr[n], strlen2(arr[n]));
			if(arr[n + 1])
			{
				if( strlen2(arr[n]) == strlen2(arr[n + 1]))
				{
					write(1, " ", 1);
				}else
				{
					write(1, "\n", 1);
				}
			}
			else
			{
				write(1, "\n", 1);
			}
			free(arr[n]);
			n++;
	}
	free(arr);
	return 0;
}
