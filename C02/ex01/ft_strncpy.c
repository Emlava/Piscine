/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:15:23 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/12 20:20:53 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest_start;

	dest_start = dest;
	while (*src && n > 0)
	{
		*dest_start = *src;
		src++;
		dest_start++;
		n--;
	}
	while (n > 0)
	{
		*dest_start = '\0';
		dest_start++;
		n--;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	source[] = "Hello!";
	char	destination[7];
	int	n = 1;

	ft_strncpy(destination, source, n);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	return (0);
}*/
