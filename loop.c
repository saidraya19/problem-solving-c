#include <unistd.h>
#include <stdio.h>
void loops()
{
	char i = 'a';
	while(i <= 'z')
	{
		char j = 'a';
		while( j <= 'z')
		{
			printf("%c%c\n", i, j);
			j++;
		}
		i++;

	}
	write(1, "\n", 1);
}
int main()
{
	loops();
	return 0;
}
