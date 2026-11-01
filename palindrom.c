#include <stdio.h>
#include <unistd.h>
int 	strlen2(char *d)
{
	int i = 0;
	while(d[i] != '\0')
	{
		i++;
	}
	return i;
}
void	longword( char *str)
{
	int i = 0;
	int n = strlen2(str);
	char temp[n];
	int k = 0;
	while(str[i] != '\0')
	{
		int j = 0;
		int check = 0;
		while(str[j] != '\0')
		{
			if(j != i && str[i] == str[j])
			{
				check = 1;
				break;
			}
			j++;
		}
		if (check == 0)
		{
			temp[k++] = str[i];
		}
		i++;
	}
	temp[k] = '\0';
	i = 0;
	while(temp[i])
	{
		str[i] = temp[i];
		i++;
	}
	str[i] = '\0';
}
void    print2( char *f)
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
	char s[] = "abccworldhac";
	longword(s);
	print2(s);
	return 0;
}

