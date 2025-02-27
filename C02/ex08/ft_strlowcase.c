/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:17:48 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/11 21:23:28 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*str_start;

	str_start = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	str = str_start;
	return (str);
}

/*#include <stdio.h>

int	main()
{
	char str1[] = "Hello! Come in.";
	char str2[] = "abc";
	char str3[] = "ABC123";

	printf("%s\n%s\n%s\n",
		ft_strlowcase(str1),
		ft_strlowcase(str2),
		ft_strlowcase(str3));
	return (0);
}*/
