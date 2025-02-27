/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:10:00 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/14 12:10:03 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (dest_start);
}

/*#include <stdio.h>

int	main()
{
	char dest[20] = "Hello";
	char src[] = "! How are you?";
	unsigned int nb = 3;

	printf("%s\n", ft_strncat(dest, src, nb));
	return (0);
}*/
