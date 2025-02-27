/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebabun <ebabun@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:15:07 by ebabun            #+#    #+#             */
/*   Updated: 2025/02/23 15:15:54 by ebabun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_nbr_len(char *str)
{
	int	i;

	i = 0;
	while (is_digit(str[i]))
		i++;
	if (i > 34)
		return (0);
	return (i);
}

char	*ft_store_nbr(char *input)
{
	char	*str_nbr;
	int		i;
	int		j;
	int		len;

	i = 0;
	while (is_space(input[i]))
		i++;
	if (input[i] == '+')
		i++;
	len = ft_nbr_len(&input[i]);
	if (len == 0)
		return (NULL);
	str_nbr = malloc(len + 1);
	if (!str_nbr)
		return (NULL);
	j = 0;
	while (is_digit(input[i]))
		str_nbr[j++] = input[i++];
	str_nbr[j] = '\0';
	return (str_nbr);
}
