#include <unistd.h>
void    printalpha()
{
        char i = 'z';
        while(i >= 'a')
        {
                write(1, &i, 1);
                i--;
        }
}
int  main()
{
	printalpha();
	return 0;
}
