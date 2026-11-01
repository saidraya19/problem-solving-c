#include <unistd.h>
#include <stdio.h>
int     main(int argc, char **argv)
{
    if(argc != 3)
    {
        return 0;
    }
    int  i = 0, int  j = 0;
    while(argv[1][i])
    {
        while(argv[2][j])
        {
            if(argv[1][i] == argv[2][j])
            {
                i++;
            }
            j++;
        }
        if(argv[1][i] == '\0')
        {
            printf("%s", argv[1]);
            return 0;
        }
        else if(argv[1][i] != '\0' && argv[2][j] == '\0')
        {
            write(1, "\n", 1);
            return 0;
        }
    }
    return 0;
}       
