#include <unistd.h>
#include <stdlib.h>
int	strlen2(char *s)
{
	int i = 0;
	while(s[i])
	{
		i++;
	}
	return i;
}
void	revers(char *h)
{
	int start = 0;
	int end = strlen2(h) - 1;
	while(start < end)
	{
		char c = h[start];
		h[start] = h[end];
		h[end] = c;
		start++;
		end--;
	}
}
int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	char *str = malloc((strlen2(argv[1]) + 1) * sizeof(char));
	int len = strlen2(argv[1]);
	int o = 0;
	int h = 0;
	char *s = malloc((strlen2(argv[1]) + 1) * sizeof(char));
	while(argv[1][o])
	{
		if(!((argv[1][o] >= 'a' && argv[1][o] <= 'z') || (argv[1][o] >= 'A' && argv[1][o] <= 'Z')  ||  (argv[1][o] >= '0' && argv[1][o] <= '9')) )
		{
			o++;
		}
		else
		{
			s[h++] = argv[1][o++];
		}
	}
	s[h] = '\0';
	while(len > 0)
	{
		int start = 0;
		while(s[start] && start + len <= strlen2(s))
		{
			int j = start;
			int k = 0;
			int check = 1;
			while(k < len && s[j])
			{
				str[k++] = s[j++];
			}
			str[k] = '\0';
			char *temp = malloc((strlen2(str) + 1) * sizeof(char));
			int l = 0;
			while(str[l])
			{
				temp[l] = str[l];
				l++;
			}
			temp[l] = '\0'; 
			revers(str);
			int m  = 0;
			while(temp[m])
			{
				if(temp[m] != str[m])
				{
					check = 0;
					break;
				}
				m++;
			}
			if(check == 1)
			{
				int i = 0;
				while(str[i])
				{
					write(1, &str[i], 1);
					i++;
				}
				free(temp);
                                free(str);
				return 0;
			}
			free(temp);
			start++;
		}
		len--;
	}
	write(1, "\n", 1);
	free(str);
	return 0;
}
