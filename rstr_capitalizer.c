#include <unistd.h>
void    cap(char *a) 
{
    int i = 0;
    while(a[i])
    {
            if(a[i] != ' ' && (a[i + 1 ] == ' ' || (a[i + 1] >= 9 && a[i + 1] <= 13) || a[i + 1] == '\0') && (a[i] >= 'a' && a[i] <= 'z'))
            {
                a[i] -= 32;
            }
            else
                {
                    if(a[i] >= 'A' && a[i] <= 'Z' && (a[i + 1] != ' ' && a[i + 1] != '\t') && (a[i + 1] != '\0'))
                    {
                        a[i] += 32;
                    }
                }
            i++;
    }
}
int main(int argc, char **argv)
{
    if(argc <= 1)
       {
           write(1, "\n", 1);
           return 0;
       }
    int i = 1;
    while(argv[i])
    {
        cap(argv[i]);
        int j = 0;
        while(argv[i][j])
        {
            write(1, &argv[i][j], 1);
            j++;
        }
        i++;
        write(1, "\n", 1);
    }
        return 0;
}
