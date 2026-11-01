#include <unistd.h>
#include <stdlib.h>
int     strlen2(char *m)
{
        int i = 0 ;
        while(m[i] != '\0')
        {
                i++;
        }
        return i;
}
int	strstr2(char *sers, char *dest)
{
	int i = 0;
	if(dest[i] == '\0')
	{
		return 0;
	}
	while(sers[i])
	{
		int j = 0;
		while(sers[i + j] == dest[j] && dest[j] != '\0')
		{
			j++;
		}
	if(dest[j] == '\0')
	{
		return 1;
	}
	i++;
	}
	return 0;
}

int	main(int argc, char **argv)
{
	int i = 0;
	char *s = argv[1];
	int len = strlen2(s);
	char *str = malloc((len + 1) * sizeof(char));
        char *result;
        while(len > 0)
        {
		int start = 0;
		while(s[start] != '\0')
		{
			int check = 1;
			int j = start;
			int k = 0;
			int t = 2;
			while(k < len && s[j])
			{
				str[k++] = s[j++];
			}
			str[k] = '\0';
			if(k == len)
			{
			while(argv[t])
			{
				if(strstr2(argv[t], str) == 0)
				{
					check = 0;
					break;
				}
				t++;
			}
			if(check == 1)
			{
				int l = 0;
				while(str[l])
				{
					write(1, &str[l], 1);
					l++;
				}
				return 0;
			}
			}
			start++;
		}
		len--;
	}
	write(1, "\n", 1);
	free(s);
	free(str);
	return 0;
}
