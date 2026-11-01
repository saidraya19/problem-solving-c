#include <unistd.h>

int is_sep(char c)
{
    if(c == ' ' || c == '\t')
        return 1;
    return 0;
}

void epur_str(char *str)
{
    int i = 0;
    while(is_sep(str[i]))
        i++;
    while(str[i])
    {
        while(str[i] && !is_sep(str[i]))
        {
            write(1,&str[i],1);
            i++;
        }
       while(str[i] && is_sep(str[i]))
           i++;
       if(str[i])
           write(1," ",1);
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
        epur_str(argv[1]);
    write(1,"\n",1);
    return 0;
}
