/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:23:13 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/10 14:01:10 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src) // char* ft...
{
	char	*dest_start;

	dest_start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}

/*int	main(void)
{
	char	source[] = "Goodbye";
	char	destination[10];

	ft_strcpy(destination, source);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	return (0);
}*/
