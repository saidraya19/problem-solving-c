#include <unistd.h>
void	printalpha()
{
	char i = 'a';
	while(i >= 'a' && i <= 'z')
	{
		write(1, &i, 1);
		i++;
	}
}
