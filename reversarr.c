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
int	countwords( char *s)
{
	int i = 0;
	int count = 0;
	while( s[i] != '\0')
	{
		if(s[i] != ' ')
		{
			if(i == 0 || s[i - 1] == ' ' )
			{
				count++;
			}
		}
		i++;
	}
	return count;
}
void	rev( char *r)
{
	char arr[20][20];
	int i = 0;
	int k = 0;
	int c = countwords(r);
	while(r[i] != '\0')
	{
		if( r[i] == ' ')
		{
			i++;
		}
		if(r[i] == '\0')
		{
			break;
		}
		int j = 0;
		while(j < 19 && r[i] != ' ')
		{
		       	arr[k][j] = r[i];
			i++;
			j++;
		}
		arr[k][j] = '\0';
		k++;
	}
	i = c - 1;
	int j = 0;
	int l = 0;
	while( i >= 0)
	{
		j = 0;
		while(arr[i][j] != '\0' )
	{
			r[l] = arr[i][j];
			j++;
			l++;
		}
		if( i > 0)
		{
		r[l++] = ' ';
		}
		i--;
	}
	r[l] = '\0';
}
void    print( char *f)
{
        int i = 0;
        while(f[i] != '\0')
        {
                write(1, &f[i], 1);
                i++;
        }
        write(1, "\n", 1);
}
int main()
{
	char k[] = " hi my name is said";
	rev(k);
	print(k);
	return 0;
}

