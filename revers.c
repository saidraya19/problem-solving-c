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
void 	rev( char *s)
{
	int end = strlen2(s) - 1;
	int start = 0;
	while( start < end)
	{
		int temp;
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
void	print( char *f)
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
	char s[] = "said";
	char d[] = "include stdio";
	rev(s);
	rev(d);
	print(s);
	print(d);
	return 0;
}
