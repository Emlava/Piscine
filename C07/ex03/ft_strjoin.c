/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:52:25 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/26 15:56:15 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	add_lengths(int size, char **strs, char *sep)
{
	int	i;
	int	words_len;
	int	sep_len;

	if (size == 0)
		return (0);
	i = 0;
	words_len = 0;
	sep_len = (size - 1) * ft_strlen(sep);
	while (i < size)
	{
		words_len += ft_strlen(strs[i]);
		i++;
	}
	return (words_len + sep_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		wc;

	res = malloc(add_lengths(size, strs, sep) + 1);
	if (!res)
		return (NULL);
	res[0] = '\0';
	if (size == 0)
		return (res);
	wc = 0;
	while (wc < size && strs[wc])
	{
		ft_strcat(res, strs[wc]);
		if (wc + 1 != size)
			res = ft_strcat(res, sep);
		wc++;
	}
	res[add_lengths(size, strs, sep)] = '\0';
	return (res);
}

/*#include <stdio.h>

int	main()
{
	int size = 5;
	char *strs[] = {"Hello", "to", "all", "of", "you"};
	char *sep = "-->";

	printf("%s\n", ft_strjoin(size, strs, sep));
	return (0);
}*/
