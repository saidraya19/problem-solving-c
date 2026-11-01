#include <unistd.h>
#include <stdlib.h>
int  strlen2(char *s)
{
	int i = 0;
	while(s[i])
	{
		i++;
	}
	return i;
}
int	countwords(char *str)
{
	int i = 0;
	int c = 0;
	while(str[i])
	{
		if(str[i] != ' ' && i == 0 || str[i - 1] == ' ')
		{
			c++;
		}
		i++;
	}
	return c;
}
int main(int argc, char **argv)
{
	if( argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	char *str = argv[1];
	char **arr = malloc((countwords(str) + 1) * sizeof(char *));
	int i = 0;
	int j = 0;
	while(str[i])
	{
		int k = 0;
		while(str[i] == ' ' && str[i])
		{
			i++;
		}
		if(str[i] == '\0')
		{
			break;
		}
		int len = i;
		while(str[len] != ' ' && str[len] != '\0')
		{
			len++;
		}
		len = len - i;
		arr[j] = malloc((len + 1) * sizeof(char));
		while(k < len)
		{
			arr[j][k++] = str[i++];
		}
		arr[j][k] = '\0';
		j++;
	}
	arr[j] = NULL;
	i = 1;
	while(arr[i])
	{
		int j = 0;
		while(arr[i][j])
		{
			write(1, &arr[i][j], 1);
			j++;
		}
		write(1, " ", 1);
		i++;
	}
	write(1, arr[0], strlen2(arr[0]));
	return 0;
}
