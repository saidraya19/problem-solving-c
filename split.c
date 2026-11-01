#include <unistd.h>
#include <stdlib.h>
int	countwords(char *k)
{
	int i = 0;
	int count = 0;
	while(k[i]) 
	{
		if(k[i] != ' ' && (i == 0 || k[i - 1] == ' '))
		{
			count++;
		}
		i++;
	}
	return count;
}
char **split(char *str, char **arr)
{
	arr = malloc((countwords(str) + 1) * sizeof(char *));
	int i = 0;
	int j = 0;
	while(str[i] == ' ' && str[i] != '\0')
	{
		i++;
	}
	while(str[i])
	{
		while(str[i] == ' ' && str[i] != '\0') 
		{
                i++;
		}
		if (str[i] == '\0')
		{
			break;
		}
		int len = 0;
		while(str[i + len] != '\0' && str[i + len] != ' ')
		{
			len++;
		}
		int k = 0;
		arr[j] = malloc((len + 1) * sizeof(char));
		while(k < len)
		{
			arr[j][k] = str[i];
			k++;
			i++;
		}
		arr[j][k] = '\0';
		j++;
	}
	arr[j] = NULL;
	return arr;
}
int main()
{
	char s[] = " this    time    it    will    be     more     complexw";
	int i = 0;
	char **car = split(s, car);
	while(car[i])
	{
		int j = 0;
		while(car[i][j])
		{
			write(1, &car[i][j], 1);
			j++;
		}
		if(car[i+1])
		{
			write (1, "   ", 3);
		}
		i++;
	}
	i = 0;
	if(!car)
	{
		return 0;
	}
	while(car[i])
	{
		free(car[i]);
		i++;
	}
	free(car);
	return 0;
}
