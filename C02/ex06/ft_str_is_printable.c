/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:17:31 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/11 21:17:34 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 32 && *str <= 126)
			|| *str == 0)
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
	if (num == 0)
	{
		return ("Found non-printable char");
	}
	else
	{
		return ("Only printable char or empty");
	}
}

int	main()
{
	char str1[] = "";  // Only printable char or empty
	char str2 = 128; // Found non-print
	char str3[] = "ABC"; // Only p...
	
	printf("%s\n%s\n%s\n",
		ft_str_type(ft_str_is_printable(str1)),
		ft_str_type(ft_str_is_printable(&str2)),
		ft_str_type(ft_str_is_printable(str3)));
	return (0);
}*/
