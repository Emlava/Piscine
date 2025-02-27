/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:47:33 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/12 15:54:55 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_previous_not_alphanumeric(char *str)
{
	if ((*(str - 1) < '0')
		|| (*(str - 1) > '9' && *(str - 1) < 'A')
		|| (*(str - 1) > 'Z' && *(str - 1) < 'a')
		|| (*(str - 1) > 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*str_start;

	str_start = str;
	while (*str != '\0')
	{
		if (str == str_start
			|| ft_previous_not_alphanumeric(str) == 0)
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= 32;
			}
		}
		else
		{
			if (*str >= 'A' && *str <= 'Z')
			{
				*str += 32;
			}
		}
		str++;
	}
	str = str_start;
	return (str);
}

/*#include <stdio.h>

int     main(void)
{
        char str1[] = "salut, comment tu vas ?
	42mots quarante-deux; cinquante+et+un";

        printf("%s\n", ft_strcapitalize(str1));
        return (0);
}*/
