/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drakula <drakula@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:05:09 by drakula           #+#    #+#             */
/*   Updated: 2026/05/03 17:06:08 by drakula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int     ft_atoi(char *s)
{
    int i = 0;
    while(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
    {
        i++;
    }
    int sign = 1;
    while(s[i] == '-' || s[i] == '+')
    {
        if(s[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    int res = 0;
   while(s[i] >= '0' && s[i] <= '9')
   {
       res = res * 10 + (s[i] - '0');
        i++;
   }
   return (res * sign);
}
int main()
{
    char d[] = "---+--+1234ab567";
    int g = ft_atoi(d);
    printf("%d \n", g);
    return 0;
}
