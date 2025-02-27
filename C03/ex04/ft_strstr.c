/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:10:14 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/15 20:49:53 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*to_find_start;
	char	*str_prev_loc;

	if (*to_find == '\0')
	{
		return (str);
	}
	to_find_start = to_find;
	while (*str)
	{
		str_prev_loc = str;
		while (*str == *to_find)
		{
			str++;
			to_find++;
			if (*to_find == '\0')
			{
				return (str_prev_loc);
			}
		}
		to_find = to_find_start;
		str = str_prev_loc + 1;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int     main()
{
        char str[] = "cdccdef";
        char to_find[] = "cde";

	printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
        
        return (0);
}*/
