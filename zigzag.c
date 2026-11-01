#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int 	strlen2(char *m)
{
	int i = 0 ;
	while(m[i] != '\0')
	{
		i++;                         
	}
	return i;
}                     
void	revers(char *s)
{
	int start = 0;
	int end = strlen2(s) - 1;
	while( start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}

int main( int argc, char **argv)
{
	if( argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	char *str[100];
	int j = 0;
	int i = 0;
	while(argv[1][j])
	{
		while(argv[1][j] == ' ')
		{
			j++;
		}
		if(argv[1][j] == '\0')
		{
			write(1, "\n", 1);
		}
		str[i] = malloc(strlen2(argv[1]) + 1);
		int k = 0;
		while(argv[1][j] && argv[1][j] != ' ')
		{
	
			str[i][k] = argv[1][j];
			j++;
			k++;
		}
		str[i][k]= '\0';
		i++;
	}
	str[i] = NULL;
	i = 0;
	while(str[i])
	{
		if(i % 2 != 0)
		{
			revers(str[i]);
		}
		i++;
	}
	i = 0;
	while(str[i])
	{
		printf("%s", str[i]);
		if(str[i + 1])
		printf(" ");
		i++;
	}
	printf("\n");
	return 0;
}
