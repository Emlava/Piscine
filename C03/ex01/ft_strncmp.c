/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 12:09:30 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/17 15:15:26 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int     main(void)
{
        char str1[] = "a";
        char str2[] = "ab";
        int n = 0;

        printf("%d\n", ft_strncmp(str1, str2, n));
        printf("%d\n", strncmp(str1, str2, n));
        return (0);
}*/
