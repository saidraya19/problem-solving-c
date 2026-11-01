#include <unistd.h>
#include <stdio.h>
void	even()
{
	int  i = 0;
	char c = 'a';
	while(i <= 9)
	{
		printf("%d", i);
		i++;
	}
}
int main()
{
	even();
	return 0;
}
