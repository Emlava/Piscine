/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:16:52 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/11 21:17:01 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
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
		return ("Found a non-lowercase char");
	}
	else
	{
		return ("Only lowercase char or empty");
	}
}

int	 main(void)
{
	char str1[] = "Hello"; // Found a non-lowercase...
	char str2[] = "alpha"; // Only lowercase
	char str3[] = "";      // Only l...

	printf("%s\n%s\n%s\n",
		ft_str_type(ft_str_is_lowercase(str1)),
		ft_str_type(ft_str_is_lowercase(str2)),
		ft_str_type(ft_str_is_lowercase(str3)));
	return (0);
}*/
