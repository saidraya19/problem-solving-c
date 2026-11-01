#include <stdio.h>
#include <stdlib.h>
int isPalindrome(long x) {
    if(x < 0)
    {
        return 0;
    }
    long f = x;
    long h = 0;
    int  res = 0;
    while (x > 0) {
        res = x % 10;
        h = h * 10 + res;
        x /= 10;
    }
     if(f == h)
     {
         return 1;
     }
     else
     {
         return 0;
     }
}
char* nearestPalindromic(char* n) {
    long res = 0;
    int i = 0;
    int k = 0;
    while(n[k])
    {
        k++;
    }
    while (n[i])
    {
        res = res * 10 + (n[i] - '0');
        i++;
    }
    if (res == 0) {
    char *c = malloc(2);
    c[0] = '1';
    c[1] = '\0';
    return c;
    }
    if(res == 1)
    {
       char *c = malloc(2);
        c[0] = 0 + '0';
        c[1] = '\0';
        return c;
    }
    long nb = res;
    long nbr = nb;
    if(isPalindrome(nbr) == 1)
    {
        res = nbr + 1;
    while (!isPalindrome(res)) {
       res++;
    }
    nb = nbr - 1;
    while (!isPalindrome(nb) && nb >= 0 )
    { nb--; }
    }
    else
    {
        while (!isPalindrome(res)) {
       res++;}
        while (!isPalindrome(nb) && nb >= 0 ){ nb--; }
    }
    int j = 0;
    char* str = malloc(k + 3);
    if (res - nbr < nbr - nb) {
        while (res > 0) {
            str[j] = res % 10 + '0';
            res /= 10;
            j++;
        }
        str[j] = '\0';
        j--;
        int p = 0;
        while (p < j) {
            char temp = str[p];
            str[p] = str[j];
            str[j] = temp;
            p++;
            j--;
        }
        return str;
    }
    else{
        char *s = malloc(k + 3);
        int j = 0;
        while (nb > 0) {
            s[j] = nb % 10 + '0';
            nb /= 10;
            j++;
        }
        s[j] = '\0';
        j--;
        int l = 0;
        while (l < j) {
            char temp = s[l];
            s[l] = s[j];
            s[j] = temp;
            l++;
            j--;
        }
        return s;
    }
}
int main()
{
    printf("%s\n", nearestPalindromic("126"));
    printf("%s\n", nearestPalindromic("121"));  
    printf("%s\n", nearestPalindromic("101"));  
    printf("%s\n", nearestPalindromic("9"));  
    printf("%s\n", nearestPalindromic("22"));   
    printf("%s\n", nearestPalindromic("11"));  
    printf("%s\n", nearestPalindromic("0"));   
    printf("%s\n", nearestPalindromic("1"));    
    return 0;
}
