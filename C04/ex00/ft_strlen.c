/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 19:08:03 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/15 19:08:25 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str)
	{
		str++;
		n++;
	}
	return (n);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str;

	str = "Hello";
	printf("%d\n", ft_strlen(str));
	return (0);
}*/
