/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:16:22 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/11 21:16:31 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
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

char	*ft_str_type(int num)
{
	if (num == 1)
	{
		return ("Only digits or empty"); 
	}
	else
	{
		return ("Found non-digit");
	}
}

int	main(void)
{
	char str1[] = "123"; // Only digits or emtpy
	char str2[] = "1, 2 and 3"; // Found non-digit
	char str3[] = ""; // Only digits or empty
	
	printf("%s\n%s\n%s\n",
		ft_str_type(ft_str_is_numeric(str1)),
		ft_str_type(ft_str_is_numeric(str2)),
		ft_str_type(ft_str_is_numeric(str3)));
	return (0);
}*/
