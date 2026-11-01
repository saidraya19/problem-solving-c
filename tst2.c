#include <unistd.h>

void rstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        i++;
    }
}

void rstr_capitalize(char *str)
{
    rstr(str);
    int i = 0;
    while(str[i])
    {
        if((str[i] >= 97 && str[i] <= 122) &&
            ((str[i + 1] == ' ' || str[i + 1] == '\t') || str[i + 1] == 0))
            str[i] = str[i] - 32;
        write(1,&str[i],1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if(argc >= 2)
    {
        int i = 1;
        while(argv[i])
        {
            rstr_capitalize(argv[i]);
            write(1,"\n",1);
            i++;
        }
    }
    else
        write(1,"\n",1);
    return 0;
}
