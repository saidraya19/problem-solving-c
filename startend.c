#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	strlen2(char *c)
{
	int i = 0;
	while( c[i] != '\0')
	{
		i++;
	}
	return i;
}
int	countsep(char *s)
{
	int count = 0;
	int i = 0;
	int n = strlen2(s) - 1;
	while( s[i] != '\0' )
	{
		if(s[0] == ' ')
		{
			i++;
		}
		if(s[n] == ' ' || s[n - 1] == ' ')
		{
			i++;
		}
		if(s[i] == ' ')
		{
			count++;
		}
		i++;
	}
	return count + 1;
}
void	rev(char str[])
{
	int i = 0;
	int n = strlen2(str);
	char *arr[10];
	while(i < words)
	{
		int j = 0;
		while( str[j] != ' ' && str[j] != '\0')
		{
			arr[i][j] = str[j];
			if( str[j] == ' ' && str[j + 1] != '\0')
			{
				j++;
			}
			j++;
		}
		i++;
	}
	char sep = ' ';
	i = 1;
	int j = 0;
	int end = countsep(str);
	while(str[i] != '\0')
	{
		str[i] = arr[end][j];
		j++;
		i++;
	}
	i = 0;
	while( arr[i] != arr[end][0])
	{
		int  j = 0;
		while(str[j] != '\0')
		{
			str[j] += arr[i][j];
			j++;
		}
		i++;
	}
	i = 0;
	j = 0;
	while( str[i] != '\0')
	{
		str[i] = str[i] + arr[0][j];
		i++;
		j++;
	}       
}
int main()
{
	char str[] = "hi my name is said";
	rev(str, 5);
	int i = 0;
	char n = strlen2(str) - 1;
	while( str[i] != '\0')
	{
		write(1, &str[i], n);
		i++;
	}
	return 0;
}
