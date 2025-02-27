/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:30:37 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/20 17:04:51 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_pos_or_neg(char *str)
{
	int	min;

	min = 0;
	while ((*str >= 9 && *str <= 13)
		|| *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '+')
			str++;
		else
		{
			min++;
			str++;
		}
	}
	if (min == 0 || min % 2 == 0)
		return ('P');
	else
		return ('N');
}

int	ft_atoi(char *str)
{
	char	*str_start;
	int		integer;

	str_start = str;
	while (*str && ((*str >= 9 && *str <= 13)
			|| *str == 32 || *str == '+'
			|| *str == '-'))
		str++;
	integer = 0;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		integer = integer * 10 + (*str - '0');
		str++;
	}
	if (ft_pos_or_neg(str_start) == 'N')
		integer = -integer;
	return (integer);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char *str = "	  --+-4389265";

	printf("%d\n", ft_atoi(str));
	return (0);
}*/
