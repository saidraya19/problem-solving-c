#include <unistd.h>
#include <stdio.h>
int 	strlen2(char *s)
{
	int i = 0;
	while(s[i])
	{
		i++;
	}
	return i;
}
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i = 0;
	if(size > 0)
	{
	while(i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	}
	return strlen2(src);
}
int main()
{
	char d[10];
	char s[] = "hello world";
	int sizeofsrs = ft_strlcpy(d, s, 5);
	printf("size of srs : %d \n", sizeofsrs);
	printf("%s", d);
	return 0;
}
