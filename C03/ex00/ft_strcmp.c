/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:09:14 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/14 12:09:18 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*#include <stdio.h>

int	main (void)
{
	unsigned char str1[] = "Come up!"; // u = 117
	unsigned char str2[] = "Come down!"; // d = 100

	printf("%d\n", ft_strcmp(str1, str2));
	return (0);
}*/
