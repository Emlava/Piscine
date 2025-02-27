/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebabun <ebabun@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:12:24 by ebabun            #+#    #+#             */
/*   Updated: 2025/02/23 15:13:21 by ebabun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check_positive(char *str)
{
	int	i;

	i = 0;
	while (str[i] && is_space(str[i]))
		i++;
	if (str[i] == '-')
		return (-1);
	if (str[i] == '+')
		i++;
	return (i);
}

int	check_digit(char *str)
{
	int	i;
	int	flag_digit;

	if (check_positive(str) == -1)
		return (0);
	i = check_positive(str);
	flag_digit = 0;
	while (str[i])
	{
		if (is_digit(str[i]))
			flag_digit = 1;
		else if (str[i] == '.' && flag_digit && is_digit(str[i + 1]))
			return (0);
		else if (str[i] != '.')
			break ;
		i++;
	}
	return (flag_digit);
}
