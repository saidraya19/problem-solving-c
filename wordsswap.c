#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int     strlen2(char *c)
{
	int i = 0;
	while( c[i] != '\0')
	{
		i++;
	}
	return i;
}
int     countsep(char *s)
{
	int count = 0;
	int i = 0;
	while( s[i] != '\0' )
	{
		if(s[i] != ' ')
		{
			if( i == 0 || s[i - 1] == ' ')
			{
				count++;
			}
		}
		i++;
	}
	return count ;
}
void	rev(char *s)
{
	int k = 0;
	int words = countsep(s);
	char arr[20][20]; 
	int i = 0;
	int j = 0;
	while( s[i] != '\0')
	{
		while(s[i] == ' ')
		{
			i++;
		}
		if (s[i] == '\0')
		{
			break;
		}
		j = 0;
		while( s[i] && j < 19 && s[i] != ' ')
		{
				arr[k][j] = s[i];
				j++;
				i++;
		}
		arr[k][j] = '\0';
		k++;
	}
		i = 0;
		j = 0;
		int w = 0;
		while( w < words )
		{
			int index = w;
			if(w == 0)
			{
				index = words - 1;
			}
			else if ( w == words - 1)
			{
				index = 0;
			}
			j = 0;
			while( arr[index][j] != '\0')
			{
				s[i] = arr[index][j];
				i++;
				j++;
			}
			if (w < words - 1)
			{
				s[i++] = ' ';
			}
			w++;
		}
		s[i] = '\0';
}
int main()
{
	char l[] = " hi my name is said  ";
	rev(l);
	int i = 0;
	while (l[i] != '\0')
	{
		write(1, &l[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return 0;
	}





