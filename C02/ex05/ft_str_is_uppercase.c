/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:17:14 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/11 21:17:20 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>

char *ft_str_type(int num) 
{
	if (num == 0)
	{
		return ("Found a non-uppercase char");
	}
	else
	{
		return ("Only uppercase char or empty");
	}
}

int	 main(void)
{
	char str1[] = "Hi"; // Found a non-uppercase...
	char str2[] = "ALPHA"; // Only uppercase
	char str3[] = "";      // Only u...

	printf("%s\n%s\n%s\n",
		ft_str_type(ft_str_is_uppercase(str1)),
		ft_str_type(ft_str_is_uppercase(str2)),
		ft_str_type(ft_str_is_uppercase(str3)));
	return (0);
}*/
