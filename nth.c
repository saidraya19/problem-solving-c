/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nth.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 19:58:10 by root              #+#    #+#             */
/*   Updated: 2026/05/04 01:13:23 by drakula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
int	count( char *str)
{
	int i = 0;
	while(str[i])
    {
        i++;
	}
	return i;
}
void    nth(char s[], int n)
{
	int i = 0;
        if( n <= 0 || n > count(s))
	{
		write(1, "\n", 1);
	}
	int len = count(s);
	i = n - 1;
        while( i <= len)
	{
		if (((s[i] >= 65  && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)))
		{
			write(1, &s[i], 1);
		}
		i += n;
    }
 write(1, "\n", 1);
}
int main()
{
        nth("abcddffg", 4);
        return 0;
}
