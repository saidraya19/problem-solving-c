#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
   int    strlen2(char  *s)
   {
       int i = 0;
       while(s[i])
       {
           i++;
       }
      return i;
  }
  int     check1(char *base)
  {
      if(strlen2(base) < 2)
      {
          return 0;
      }
      int i = 0;
      while(base[i])
      {
          if((base[i] == ' ') || (base[i] == '-')  || (base[i] == '+') || (base[i] >= 9 && base[i] <= 13))
         {
              return 0;
          }
          int j = i + 1;
          while(base[j])
          {
              if(base[i] == base[j])
              {
                  return 0;
              }
              j++;
          }
          i++;
      }
      return 1;
  }
  int     ft_atoi(char *str, char *base)
  {
      if(check1(base) == 0)
      {
          return 0;
      }
      int i = 0;
      while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
      {
          i++;
      }
      int sign = 1;
      while(str[i] == '-' || str[i] == '+')
      {
          if(str[i] == '-')
          {
              sign *= - 1;
          }
          i++;
      }
      int res = 0;
      while(str[i])
      {
          int j = 0;
          while(base[j] && str[i] != base[j])
          {
              j++;
          }
          if(base[j] == str[i])
         {
              res = res * strlen2(base) + j;
              i++;
          }
          else
          {
              break;
          }
      }
      return (res * sign);
  }
char    *ft_putnbr(int nbr, char *base)
{
    if(!check1(base))
    {
        return 0;
    }
    char *s = malloc(34);
    int len = strlen2(base);
    long nb = nbr;
    int i = 0;
    if(nb < 0)
    {
        s[i++] = '-';
        nb = -nb;
    }
    if(nb == 0)
    {
        s[i++] = '0';  
        s[i] = '\0'; 
        return s;
    }
    int st = i;
    while(nb > 0)
    {
        s[i] = base[nb % len];
        nb = nb / len;
        i++;
    }
    s[i] = '\0';
    int j = i - 1;
    while(st < j)
    {
        char t = s[st];
        s[st] = s[j];
        s[j] = t;
        st++;
        j--;
    }
    return s;
} 
char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    int nb = ft_atoi(nbr, base_from);
    char *str = ft_putnbr(nb, base_to);
    return str;
}
int main()
{
    char *t = ft_convert_base("2a", "0123456789abcdef", "0123456789");
    printf("%s\n", t);
    free(t);
    return 0;

}
