int main(int argc, char **argv)
{
    if(argc != 2)
    {
        ftputchar('\n');
        return 0;
    }
    int i = 0;
    int freq[256] = {0};
    int j = 0;
    while(argv[1][j])
    {
        if( argv[1][j] >= 'A' && argv[1][j] <= 'Z')
                {
                        argv[1][j] += 32;
                }
        if((argv[1][j] >= 'a' && argv[1][j] <= 'z') || (argv[1][j] >= 'A' && argv[1][j] <= 'Z'))
        {
            freq[argv[1][j]]++;
        }
        j++;
    }
    j = 0;
    char s[strlen2(argv[1]) + 1];
    int exist[256] = {0};
    int k = 0;
    while(argv[1][j])
    {
        if(exist[argv[1][j]] == 0 && ((argv[1][j] >= 'a' && argv[1][j] <= 'z') || (argv[1][j] >= 'A' && argv[1][j] <= 'Z')))
        {
            s[k] = argv[1][j];
            k++;
            exist[argv[1][j]] = 1;
        }
        j++;
    }
    s[k] = '\0';
    j = 0;
    while(s[j])             "abc"
    {
        ft_putnbr(freq[s[j]]);
        ftputchar(s[j]);
        if(s[j + 1])
        {
            write(1, ", ", 2);
        }
        j++;
    }
    write(1, "\n", 1);
    return 0;
}
