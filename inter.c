#include<unistd.h>
int main(int argc, char **argv)
{
    if(argc != 3)
    {
        write(1, "\n", 1);
        return 0;
    }
    char s[255] = {0};
    int i = 0;
    while(argv[1][i])
    {
        int j = 0;
        while(argv[2][j])
        {
            if(argv[1][i] == argv[2][j] && s[argv[1][i]] == 0)
            {
                write(1, &argv[1][i], 1);
                s[argv[1][i]]++;
            }
            j++;
        }
        i++;
    }
    return 0;
}
