/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:17:48 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/11 21:17:53 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*str_start;

	str_start = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 32;
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
	char str2[] = "BYE";
	char str3[] = "abc123";

	printf("%s\n%s\n%s\n",
		ft_strupcase(str1),
		ft_strupcase(str2),
		ft_strupcase(str3));
	return (0);
}*/
